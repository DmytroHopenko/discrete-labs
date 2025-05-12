#include "List.h"

void push(Node*& top, datatype value) {
    Node* temp = new Node{value, top};
    top = temp;
}

datatype pop(Node*& top) {
    if (!top) return '\0';
    Node* temp = top;
    datatype val = temp->key;
    top = top->next;
    delete temp;
    return val;
}

datatype peek(Node* top) {
    return top ? top->key : '\0';
}

bool isEmpty(Node* top) {
    return top == nullptr;
}

void showStack(Node* top) {
    while (top) {
        cout << top->key << ' ';
        top = top->next;
    }
    cout << endl;
}
