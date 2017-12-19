//
// Created by Florian on 19.12.2017.
//

#ifndef UEBUNG3_NODE_H
#define UEBUNG3_NODE_H

#include <string>
#include <utility>

using namespace std;

class Node {
    public:
        // Constructor
        Node();
        explicit Node(string data);

        // Destructor
        ~Node();

        // getter and setter
        string getData() const {
            return data;
        }

        void setData(string data) {
            this->data = move(data);
        }

        Node getPredecessor() {
            return this->predecessor;
        }

        void setPredecessor(const Node &predecessor) {
            this->predecessor = predecessor;
        }

        Node getSuccessor() {
            return successor;
        }

        void setSuccessor(const Node &successor) {
            this->successor = successor;
        }

        Node predecessor;
        Node successor;

        string toString();
    private:
        string data;
};
#endif //UEBUNG3_NODE_H
