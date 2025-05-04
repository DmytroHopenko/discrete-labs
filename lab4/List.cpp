#include "List.h"

void push(Node*& top, datatype value) {
    Node* temp = new Node;
    temp->key = value;
    temp->next = top;
    top = temp;
}

datatype pop(Node*& top) {
    if (!top) {
        cout << "Stack is empty!\n";
        return -1;
    }
    Node* temp = top;
    datatype value = temp->key;
    top = top->next;
    delete temp;
    return value;
}

void showStack(Node* top) {
    cout << "Stack: ";
    while (top) {
        cout << top->key << " ";
        top = top->next;
    }
    cout << endl;
}

void enqueue(Node*& front, Node*& rear, datatype value) {
    Node* temp = new Node;
    temp->key = value;
    temp->next = nullptr;

    if (!rear) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

datatype dequeue(Node*& front, Node*& rear) {
    if (!front) {
        cout << "Queue is empty!\n";
        return -1;
    }
    Node* temp = front;
    datatype value = temp->key;
    front = front->next;
    if (!front) rear = nullptr;
    delete temp;
    return value;
}

void showQueue(Node* front) {
    cout << "Queue: ";
    while (front) {
        cout << front->key << " ";
        front = front->next;
    }
    cout << endl;
}

void add_begin(Node*& head, datatype value) {
    Node* newNode = new Node{value, head, nullptr};
    if (head) head->previous = newNode;
    head = newNode;
}

void add_end(Node*& head, datatype value) {
    Node* newNode = new Node{value, nullptr, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->previous = temp;
}

void del_begin(Node*& head) {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) head->previous = nullptr;
    delete temp;
}

void del_end(Node*& head) {
    if (!head) return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->previous->next = nullptr;
    delete temp;
}

Node* search(Node* head, datatype key) {
    while (head && head->key != key) head = head->next;
    return head;
}

void add_mid(Node*& head, datatype search_key, datatype value) {
    Node* target = search(head, search_key);
    if (!target) return;
    Node* newNode = new Node{value, target->next, target};
    if (target->next) target->next->previous = newNode;
    target->next = newNode;
}

void del_mid(Node*& head, datatype search_key) {
    Node* target = search(head, search_key);
    if (!target) return;
    if (target->previous) target->previous->next = target->next;
    else head = target->next;
    if (target->next) target->next->previous = target->previous;
    delete target;
}

void showList(Node* head) {
    while (head) {
        cout << head->key << " ";
        head = head->next;
    }
    cout << endl;
}

