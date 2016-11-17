
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

template<class T>
class linkedList : public linkedListInterface<T>
{
private:
    node * head;                            // Head is a reference to a linked-list.
    int length;                             // Length is the number of linked-list nodes.

public:
    linkedList();                               // Constructs the empty linked list object.
    ~linkedList();                              // De-allocates list memory when the program terminates.
    void insertNode( string nodeKey ) const;    // Inserts a node at the end of the list.
    bool removeNode( string nodeKey ) const;    // Removes a node from the list by item key. Returns true if successful.
    node * getNode( string nodeKey ) const;     // Searches for a node by its key. Returns a reference to first match.
    int getLength() const;                      // Returns the length of the list.
};

//******************** end of file ***************************



