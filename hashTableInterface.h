
//  hashTableInterface.h
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
class hashTableInterface
{
    
public:

    // Adds a node to the Hash Table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post If the operation was successful, a node is added to the Hash Table.
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return No return value needed.
    virtual void insertNode( string nodeKey ) const = 0;
 
    // Deletes a node by key from the Hash Table. Returns true if successful.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post If the operation was successful, a node is removed tfrom the Hash Table.
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return True if the removal is successful or false if not.
    virtual bool removeNode( string nodeKey ) const = 0;
 
    // Check Hash Table by key or null if not found.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post If the operation was successful, the reference of the linked list in the hash table is returned
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return the reference (pointer) of the match
    virtual node * getNodeByKey( string nodeKey ) const = 0;
    
    // Prints statistics of the Hash table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post No change to the private data of the hash table and linked list used in hash table.
    // @param No input parameter needed
    // @return No return value needed.
    virtual void printStats() const = 0;
  
    // Returns the number of locations in the Hash Table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post No change to the private data of the hash table and linked list used in hash table.
    // @param No input parameter needed
    // @return the value of private data "length" in datatype integer.
    virtual int getLength() const = 0;
  
    // Returns the number of nodes in the Hash Table.
    // @pre private data "array" is a reference to an array of Linked Lists and "length" cis the size of the Hash Table array.  HashTable is the array of linked list
    // @post No change to the private data of the hash table and linked list used in hash table.
    // @param No input parameter needed
    // @return the total number of linked list nodes used in the chained hash table in datatype integer.
    virtual int getNumberOfNodes() const = 0;
    
};

//******************** end of file ***************************



