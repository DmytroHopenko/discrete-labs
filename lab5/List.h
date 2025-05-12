#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

typedef char datatype;

struct Node {
    datatype key;
    Node* next;
};

void push(Node*& top, datatype value);
datatype pop(Node*& top);
datatype peek(Node* top);
bool isEmpty(Node* top);
void showStack(Node* top);

#endif //LIST_H
