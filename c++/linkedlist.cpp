#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;
};

void printForward(Node* n){
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

void printBackward(Node* n){
    while(n != NULL) {
        cout << n->data << " ";
        n = n->prev;
    }
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->prev = NULL;
    head->data = 1;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = NULL;

    printForward(head);
    printf("\n");
    printBackward(third);

    return 0;
}
