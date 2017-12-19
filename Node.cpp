//
// Created by Florian on 19.12.2017.
//

#include "Node.h"
#include <utility>

Node::Node() {
    data = nullptr;
}

Node::Node(string data) {
    this->data = move(data);
}

string Node::toString() {
    return data;
}
