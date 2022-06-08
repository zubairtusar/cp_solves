#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printForward(Node* n){
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}


Node* reverse_(Node* head)
{
    Node* current = head;
    Node* prev = NULL;
    Node* next;
    while( current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printForward(head);
    printf("\n");
    head = reverse_(head);
    printf("\n");
    printForward(head);

    return 0;
}
