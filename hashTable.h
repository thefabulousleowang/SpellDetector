
//  hashTable.h
//  CSC340 Advanced Project
//  Created by Leo Wang

#pragma once

#include <iostream>
#include <algorithm>
#include "linkedList.h"

using namespace std;

//*****************************************************************
// Chained Hash Table Class
//*****************************************************************

class hashTable
{
    
private:
    linkedList * array;             // Array is a reference to an array of Linked Lists.
    int length;                     // Length is the size of the Hash Table array.
    unsigned int hash( const string & hashKey );     // Returns an array location for a given key.

public:
    
    hashTable( int tableLength = 16 );          // Constructs the empty Hash Table object. Array length default = 16.
    ~hashTable();                               // De-allocates all memory used for the Hash Table.

    // Adds a node to the Hash Table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post If the operation was successful, a node is added to the Hash Table.
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return No return value needed.
    void insertNode( string nodeKey ) ;         // Adds a node to the Hash Table.

    // Deletes a node by key from the Hash Table. Returns true if successful.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post If the operation was successful, a node is removed tfrom the Hash Table.
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return True if the removal is successful or false if not.
    bool removeNode( string nodeKey ) ;         // Deletes a node by key from the Hash Table. Returns true if successful.

    // Check Hash Table by key or null if not found.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post If the operation was successful, the reference of the linked list in the hash table is returned
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return the reference (pointer) of the match
    node * getNodeByKey( string nodeKey ) ;     // Check Hash Table by key or null if not found.

    // Prints statistics of the Hash table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post No change to the private data of the hash table and linked list used in hash table.
    // @param No input parameter needed
    // @return No return value needed.
    void printStats() ;                         // Prints statistics of the Hash table.

    // Returns the number of locations in the Hash Table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post No change to the private data of the hash table and linked list used in hash table.
    // @param No input parameter needed
    // @return the value of private data "length" in datatype integer.
    int getLength() ;                           // Returns the number of locations in the Hash Table.

    // Returns the number of nodes in the Hash Table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post No change to the private data of the hash table and linked list used in hash table.
    // @param No input parameter needed
    // @return the total number of linked list nodes used in the chained hash table in datatype integer.
    int getNumberOfNodes() ;                    // Returns the number of nodes in the Hash Table.
    
};

//#include haskTable.cpp

hashTable::hashTable( int tableLength )    // Constructs the empty Hash Table object.
{
    if (tableLength <= 0) tableLength = 16;
    array = new linkedList[ tableLength ];
    length = tableLength;
}

hashTable::~hashTable()                     // De-allocates all memory used for the Hash Table.
{
    delete [] array;
}

unsigned int hashTable::hash( const string & nodeKey )       // (Figure 5-4) hash routine for string objects
{
    unsigned int hashValue = 0;
    for( char ch : nodeKey )
        hashValue = 37 * hashValue + ch;  // 37
    return hashValue % length;
}

void hashTable::insertNode( string nodeKey )    // Adds a node to the Hash Table.
{
    unsigned int index = hash( nodeKey );
    array[ index ].insertNode( nodeKey );
}

bool hashTable::removeNode( string nodeKey )    // Deletes a node by key from the Hash Table. Returns true if successful.
{
    int index = hash( nodeKey );
    return array[ index ].removeNode( nodeKey );
}

node * hashTable::getNodeByKey( string nodeKey )    // Check Hash Table by key.
{
    int index = hash( nodeKey );
    return array[ index ].getNode( nodeKey );
}

void hashTable::printStats()                    // Prints statistics of the Hash table.
{
    int min = 0;
    int max = 0;
    int mean = 0;
    int tmp;
    for ( int i = 0; i < length; i++ )
    {
        tmp = array[i].getLength();
        if (tmp > max ) max = tmp;
        if (tmp < min) min = tmp;
        mean = mean + tmp;
        // cout << i + 1 << " : " << tmp << endl;    // test only
    }
    int lengthOfChain [100];
    for ( int i=0; i<100; i++) lengthOfChain [i] = 0;
    for ( int i = 0; i < length; i++ )
    {
        tmp = array[i].getLength();
        lengthOfChain[tmp] ++;
    }
    cout << endl << "Hash Table Contains " << getNumberOfNodes() << " linked-list nodes in total." << endl << endl;
    cout << "      Maximum chain length : " << max << endl;
    cout << "      Minimum chain length : " << min << endl;
    cout << "      Mean chain length :    " << mean / length << endl ;
    for ( int i=min; i<=max; i++)
        cout << "      chain length = " << i << "   " << lengthOfChain [i] << " hashtable entries " << endl;
    
}

int hashTable::getLength()                      // Returns the number of locations in the chained Hash Table.
{
    return length;
}

int hashTable::getNumberOfNodes()               // Returns the number of nodes in the chained Hash Table.
{
    int nodeCount = 0;
    for ( int i = 0; i < length; i++ )
    {
        nodeCount += array[i].getLength();
    }
    return nodeCount;
}

//******************** end of file ***************************



