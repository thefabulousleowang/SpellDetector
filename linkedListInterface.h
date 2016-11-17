
//  linkedListInterface.h
//  CSC340 Advanced Project
//  Created by Leo Wang

#pragma once

//*****************************************************************
// Linked-List String Class Interface
//*****************************************************************

template<class T>
class linkedListInterface
{
public:

    // Inserts a node at the end of the list
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post If the operation was successful, private data "head" will contains the head of the list which is the newly added node and "length" is incremented by 1.
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return No return value needed.
    virtual void insertNode( string nodeKey ) const =0;

    // Removes a node from the list by item key. Returns true if successful.
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post If the operation was successful, private data "head" will contains the head after the specified node is removed and "length" is decremented by 1.
    // @param nodeKey is the data in "to be removed" node.
    // @return True if the removal is successful or false if not.
    virtual bool removeNode( string nodeKey ) const =0;

    // Searches for a node by its key. Returns a reference to first match.
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post No change to the private data of the linked list.
    // @param nodeKey is the data to be searched.
    // @return the reference (pointer) of the first match
    virtual node * getNode( string nodeKey ) const =0;

    // Returns the length of the list.
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post No change to the private data of the linked list.
    // @param No input parameter needed
    // @return the value of private data "length" in datatype integer.
    virtual int getLength() const =0;
};


//******************** end of file ***************************



