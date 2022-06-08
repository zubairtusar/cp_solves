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

int print_tree_preorder(Node *tree1)
{
    if(tree1 == NULL)
    {
        cout << endl << "Terminating";
        return 0;
    }

    cout << endl << tree1->data << endl ;
    print_tree_preorder(tree1->left);
    print_tree_preorder(tree1->right);
}

int print_tree_inorder(Node *tree1)
{
    if(tree1 == NULL)
    {
        return 0;
    }

    print_tree_inorder(tree1->left);
    cout << endl << tree1->data << endl ;
    print_tree_inorder(tree1->right);
}

int print_tree_postorder(Node *tree1)
{
    if(tree1 == NULL)
    {
        return 0;
    }

    print_tree_postorder(tree1->left);

    print_tree_postorder(tree1->right);

    cout << endl << tree1->data << endl ;
}

int main()
{
    struct Node* myTree = new Node("myTree Root");

    struct Node* left1 = new Node("left1");
    myTree->left = left1;

    struct Node* right1 = new Node("right1");
    myTree->right = right1;

    struct Node* left21 = new Node("left21");
    left1->left = left21;

    struct Node* right21 = new Node("right21");
    left1->right = right21;


    print_tree_postorder(myTree);
}
