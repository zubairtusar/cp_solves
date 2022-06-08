#include<bits/stdc++.h>
using namespace std;

struct Node{
    string data;
    struct Node* parent;
    struct Node* left;
    struct Node* right;
    Node(string value)
    {
        data = value;
        parent = NULL;
        left = NULL;
        right = NULL;
    }
};

int main(){
    struct Node* myTree = new Node("myTree Root");

    struct Node* left1 = new Node("left1");
    myTree->left = left1;

    struct Node* right1 = new Node("right1");
    myTree->right = right1;
}
