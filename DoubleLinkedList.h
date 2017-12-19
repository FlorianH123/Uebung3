//
// Created by Florian on 19.12.2017.
//

#ifndef UEBUNG3_DOUBLELINKEDLIST_H
#define UEBUNG3_DOUBLELINKEDLIST_H

#include "Node.h"
#include <string>

using namespace std;

class DoubleLinkedList {
    public:
        // Constructor
        DoubleLinkedList();
        // Destructor
        ~DoubleLinkedList();

        void insertAtHead(string data);
        void insertAtTail(string data);

        bool deleteAtHead();
        bool deleteAtTail();

        bool isEmpty();

        string toString();
    private:
        Node *head;
        Node *tail;

        Node* createNewNode(const string &data);
        void deleteNode (Node *nodeToDelete);

};


#endif //UEBUNG3_DOUBLELINKEDLIST_H
