
//  hashTable.h
//  CSC340 Advanced Project
//  Created by Leo Wang

#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

//*****************************************************************
// Chained Hash Table Class
//*****************************************************************

template<class T>
class hashTable : public hashTableInterface<T> {
    
private:
    linkedList * array;             // Array is a reference to an array of Linked Lists.
    int length;                     // Length is the size of the Hash Table array.
    unsigned int hash( const string & hashKey );     // Returns an array location for a given key.

public:
    
    hashTable( int tableLength = 16 );          // Constructs the empty Hash Table object. Array length default = 16.
    ~hashTable();                               // De-allocates all memory used for the Hash Table.
    void insertNode( string nodeKey ) const;    // Adds a node to the Hash Table.
    bool removeNode( string nodeKey ) const;    // Deletes a node by key from the Hash Table. Returns true if successful.
    node * getNodeByKey( string nodeKey ) const;  // Check Hash Table by key or null if not found.
    void printStats() const;                    // Prints statistics of the Hash table.
    int getLength() const;                      // Returns the number of locations in the Hash Table.
    int getNumberOfNodes() const;               // Returns the number of nodes in the Hash Table.
    
};

//******************** end of file ***************************



