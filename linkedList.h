
//  LinkedList.h
//  CSC340 Advanced Project
//  Created by Leo Wang

#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

//*****************************************************************
// Linked-List String Class
//*****************************************************************

struct node
{
    string key;
    node * next;
};

class linkedList
{
private:
    node * head;                            // Head is a reference to a linked-list.
    int length;                             // Length is the number of linked-list nodes.

public:
    linkedList();                        // Constructs the empty linked list object.
    ~linkedList();                        // De-allocates list memory when the program terminates.

    // Inserts a node at the end of the list
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post If the operation was successful, private data "head" will contains the head of the list which is the newly added node and "length" is incremented by 1.
    // @param nodeKey is the data to be filled into the private data "key" of node struct.
    // @return No return value needed.    
    void insertNode( string nodeKey ) ;   // Inserts a node at the end of the list.

    // Removes a node from the list by item key. Returns true if successful.
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post If the operation was successful, private data "head" will contains the head after the specified node is removed and "length" is decremented by 1.
    // @param nodeKey is the data in "to be removed" node.
    // @return True if the removal is successful or false if not.
    bool removeNode( string nodeKey ) ;   // Removes a node from the list by item key. Returns true if successful.

    // Searches for a node by its key. Returns a reference to first match.
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post No change to the private data of the linked list.
    // @param nodeKey is the data to be searched.
    // @return the reference (pointer) of the first match    
    node * getNode( string nodeKey ) ;    // Searches for a node by its key. Returns a reference to first match.

    // Returns the length of the list.
    // @pre private data "head" contains the head of the list and "length" contains the number of the nodes on the list
    // @post No change to the private data of the linked list.
    // @param No input parameter needed
    // @return the value of private data "length" in datatype integer.
    int getLength() ;                     // Returns the length of the list.

};

linkedList::linkedList()    // Constructs the empty linked list object. Creates the head node and sets length to zero.
{
    head = new node;
    head -> next = NULL;
    length = 0;
}

linkedList::~linkedList()       // De-allocates list memory when the program terminates.
{
    node * p = head;
    node * q = head;
    while (q)
    {
        p = q;
        q = p -> next;
        if (q) delete p;
    }
}

void linkedList::insertNode( string nodeKey ) // Inserts a node at the end of the list.
{
    node * newNode = new node { nodeKey, NULL };
    if ( (head->next) == NULL )
    {
        head -> next = newNode;
        length++;
        return;
    }
    node * p = head;
    node * q = head;
    while (q)
    {
        p = q;
        q = p -> next;
    }
    p -> next = newNode;
    newNode -> next = NULL;
    length++;
}

bool linkedList::removeNode( string nodeKey ) // Removes a node from the list by node key. Returns true if successful.
{
    if (!head -> next) return false;
    node * p = head;
    node * q = head;
    while (q)
    {
        if (q -> key == nodeKey)
        {
            p -> next = q -> next;
            delete q;
            length--;
            return true;
        }
        p = q;
        q = p -> next;
    }
    return false;
}

node * linkedList::getNode( string nodeKey ) // Searches for a node by its key. Returns first match.
{
    node * p = head;
    node * q = head;
    while (q)
    {
        p = q;
        if ((p != head) && (p -> key == nodeKey))
            return p;
        q = p -> next;
    }
    return NULL;
}

int linkedList::getLength()   // Returns the length of the list.
{
    return length;
}


//******************** end of file ***************************



