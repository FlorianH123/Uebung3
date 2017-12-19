//
// Created by Florian on 19.12.2017.
//

#include "DoubleLinkedList.h"

#include <utility>

DoubleLinkedList::DoubleLinkedList() {
    //this->head = new Node();
    //this->tail = new Node();
}

DoubleLinkedList::~DoubleLinkedList() {
    delete(head);
    delete(tail);
}

void DoubleLinkedList::insertAtHead(string data) {
    Node *newNode = createNewNode(data);

    if (isEmpty()) {
        head = newNode;
        tail = head;
    } else {
        this->head->predecessor = *newNode;
        newNode->successor = *head;
        head = newNode;
    }
}

void DoubleLinkedList::insertAtTail(string data) {
    Node *newNode = createNewNode(data);

    if (isEmpty()) {
        tail = newNode;
        head = tail;
    } else {
        this->tail->successor = *newNode;
        newNode->predecessor = *tail;
        tail = newNode;
    }

}

bool DoubleLinkedList::deleteAtHead() {
    deleteNode(this->head);
}

bool DoubleLinkedList::deleteAtTail() {
    deleteNode(this->tail);
}

Node* DoubleLinkedList::createNewNode(const string &data) {
    Node *newNode = new Node(data);
    newNode->setPredecessor(nullptr);
    newNode->setSuccessor(nullptr);
    return newNode;
}

bool DoubleLinkedList::isEmpty() {
    return this->head == nullptr && this->tail == nullptr;
}

void DoubleLinkedList::deleteNode(Node *nodeToDelete) {
    Node tmpNode = *nodeToDelete;

    if (nodeToDelete->predecessor != NULL) {

    }
}