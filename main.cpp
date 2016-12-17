
//  main.cpp
//  CSC340 Advanced Project
//  Created by Leo Wang


#include <iostream>
#include <cassert>
#include <algorithm>
#include <cmath>
#include <cfloat>
#include <climits>
#include <fstream>

using namespace std;

#include "hashTable.h"

//**********************************************************************************************
// Function to remove special characters from the artoicle before search the distionary.
//***********************************************************************************************

string RemoveSpecials(string str)
{
    long i=0;
    long len = str.length();
    
    while(i < len)
    {
        char c=str[i];
        if(((c>='0')&&(c<='9'))||((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
        {
            if((c>='A')&&(c<='Z')) str[i]+=32; //Assuming dictionary contains small letters only.
            ++i;
        }
        else
        {
            str.erase(i,1);
            --len;
        }
    }
    return str;
}

//**********************************************************************************************
// Main program consists of following steps
//
// Step 1 : Open dictionary.txt, Take numWord (number of word of the dictionary )
//          create the hash table of the size equal to the number of words in the dictionary
//
// Step 2 : For each word, calculate the hash function and insert into the hash table
//
// Step 3 : Output the statistics (min, max, mean)chain length and statistics of hashtable entries
//
// Step 4 : Open document.txt.
//          Read the words from the document and output wach word that is not in the dictionary
//
//***********************************************************************************************


int main(int argc, char *argv[])
{
    string inFileName;                      // input file name with full path
    ifstream inFile;                        // file handle
    string  key,filterKey;                  // buffer
    int numWords;                           // number of words in dictionary
    int i, j;
    
    if (argc != 3)                          // Terminate if input text file name is not entered as run-time argument
    {
        cerr << "Usage: " << argv[0] << " main /your-full-path/dictionary.txt /your-full-path/document.txt" << endl;
        return false;
    }
    //for test only
    cout << "argc : "<< argc << endl << "argv[0] : " << argv[0] << endl << "argv[1] : " << argv[1] << endl << "argv[2] : " << argv[2] << endl << endl << endl;
    
    //*******************************************************************************
    // Step 1 : Open dictionary.txt, Take numWord (number of word of the dictionary )
    // create the hash table of the size equal to the number of words in the dictionary
    //*******************************************************************************
    
    inFileName = argv[1];                   // Open "dictionary.txt"
    inFile.open(inFileName, ios::in);
    cout << "Open " << inFileName << endl;
    
    getline(inFile, key, '\n');
    numWords = stoi(key);
    cout << endl << "**********************************************************" << endl;
    cout << endl << "Start Dictionary Hashtable Insertion, total " << numWords << " words" << endl;
    hashTable myHashTable(numWords);      // create Hash Table with length of numWords.
    
    
    for (i=1; i<= numWords; i++)
    {
        
        //************************************************************************************
        // Step 2 : For each word, calculate the hash function and insert into the hash table
        //************************************************************************************
        
        inFile >> key;
        myHashTable.insertNode( key );
        
    }  // for i loop
    cout << endl << "Finished Dictionary Hashtable Insertion, total " << i-1 << "words" << endl;
    
    inFile.close();                         // Close "dictionary.txt"
    
    //*********************************************************************************************
    // Step 3 : Output the statistics (min, max, mean chain length)
    //*********************************************************************************************
    
    myHashTable.printStats();               // print Statistics of the Hash Table.
    
    //*********************************************************************************************
    // Step 4 : Open document.txt.
    //          Read the words from the document and output wach word that is not in the dictionary
    //*********************************************************************************************
    
    inFileName = argv[2];                   // Open "document.txt"
    inFile.open(inFileName, ios::in);
    cout << endl << "*******************************************************"<< endl;
    cout << endl << "Start to use the dictionary to check article text file." << endl << endl;
    cout << endl << endl << "Opening article file " << inFileName << endl << endl;
    cout << "The following words are NOT found in the speeling check dictionary:" << endl;
    i = 0;
    j = 0;
    
    while ( inFile >> key )
    {
        
        filterKey = RemoveSpecials(key);
        if ( myHashTable.getNodeByKey( filterKey ) == NULL )
        {
            j++;
            cout << filterKey << " ";
        }
        else
            i++;
    }
    cout << endl << endl << "Total " << j << " words Not in spelling check dictionary.";
    cout << endl << "Total " << i << " words found in spelling check dictionary." << endl << endl;
    inFile.close();                         // Close "document.txt"
    return 0;
    
}   // main


//******************** end of file ***************************
