#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
};
Node *head = nullptr;
Node *top = nullptr;
void push(int value) {
    Node *node = new Node();
    node->data = value;
    node->next = nullptr;

    node->next = head;
    head = node;
    top = node;
}
void pop() {
    if (head == nullptr) {
        cout << "The Stack is Empty!" << endl;
    } else {
        head = head->next;
        top = head;
    }
}
int peek() {
    return top->data;
}
// previous stack ended
int main() {
    for (int i = 1; i <= 10; ++i) {
        push(i);
    }
    pop();
    for (Node *ptr = head; ptr != nullptr; ptr = ptr->next) {
        cout << ptr->data << " ";
    }
    cout << endl;
    // previous stack ended
    return 0;
}
