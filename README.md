#CSC340 Advanced Project Leo Wang


##Problem statement:

My proposal is to create a fast spelling checker application. The following is the summary of the project.

The checker parse through text document and output a log file showing words that are not in the dictionary. It recognizes large number of words and special common characters. Goal is more than 350k words by using word list in  https://github.com/dwyl/english-words

It provide fast search performance, O(1), by separate-chaining hash table template class implementation.

It’s developed with Object Oriented Design principles and practices learned in class by using Unified Modeling Language (UML) and Virtual Methods.

Create or use existing abstract data type (ADT) and Standard Template Library (STL) like hash table, linked list, array, and file I/O.


## Constraints

Design and implement following ADT:

* LinkedList
* HashTable

Design style to follow the Object Oriented Design Priciples. 

* Implement virtual method with LinkedListInterface.h and HashTableInterface.h  

* The data must be in the private section of the class. All access to these data should from public methods. No leak of data reference to the client programs.  The class should support the string type.

* Methods to be implemented in public section of the class. 
  Use UML to document the specification (@Pre @Post @Param @Return)   
    LinkedList:
        constructor 
        destructor
        insertNode
        removeNode
        getNode
        getLength  
    HashTable:
        constructor
        destructor
        insertNode
        removeNode
        getNodeByKey
        getLength
        getNumberOfNodes
        printStats

* Initialization stage of the program : 
    The program read the word list from dictionary.txt, generate hash key and store the word in HashTable.

* Spelling stage of the program: 
    The program read the document from reading.txt and generate the spelling log (words not in dictionary) on screen.

## Files to work on

        `README.md`
        `LinkedListInterface.h`
        `HashTableInterface.h`
        `LinkedList.h`
        `LinkedList.cpp`
        `hashTable.h`
        `hashTable.cpp`
        `main.cpp`          : The main program of the spelling checker application
        `dictionary.txt`    : The dictionary word list based on wordlist https://github.com/dwyl/english-words
        `reading.txt`       : The document converted from pdf to text format 
        `project_report.pdf`: project report file in pdf and editable version (page or word)  

## Running tests

* To run the program in command line: 
  main /your-full-path/dictionary.txt /your-full-path/reading.txt <enter>

* To run the program in XCODE
  Add the command line arguments in following click path
        Product -> Scheme -> Edit Scheme -> Run -> Arguments
  For example: 
            Add :/Users/wang_family/Desktop/C++/CSC340Project/dictionary.txt
                 /Users/wang_family/Desktop/C++/CSC340Project/reading.txt

* To run the tests using Clion: 


## Note

Milestone Schedule:

    10/26/2016 Approval by Professor (Proposal reviewed by Prefossor 10/26 done)

    10/31/2016 Send README file for professor review. Submit following files:
                    `README.md` (revised 11/9/2016 for specifics in milestone)

    11/16/2016 Finish "Specification of the application" in UML. Submit following files:
                    `LinkedListInterface.h`
                    `HashTableInterface.h`
                    `LinkedList.h`
                    `hashTable.h`
 
    12/7/2016  Finish coding, word list and preliminary testing. Submit following files: 
                    `LinkedList.cpp`
                    `hashTable.cpp`
                    `main.cpp`     
                    `dictionary.txt`
                    `reading.txt`    

    12/14/2016 Finish detail testing and project report. Submit following files:
                    `project_report.pdf`

End Of File
