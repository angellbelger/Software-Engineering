/*
 * Program  : Preorder traversal of binary search tree
 * Language : C
 */

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

//return a new node with the given value
struct node *getNode(int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));

    newNode->key   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

//inserts nodes in the binary search tree
struct node *insertNode(struct node *root, int val)
{
     if(root == NULL)
         return getNode(val);

     if(root->key < val)
         root->right = insertNode(root->right,val);

     if(root->key > val)
         root->left = insertNode(root->left,val);

     return root;
}

//preorder traversal of the binary search tree
void preorder(struct node *root)
{
    if(root == NULL)
        return;

    //visit the root
    printf("%d ",root->key);

    //traverse the left subtree
    preorder(root->left);

    //traverse the right subtree
    preorder(root->right);
}

int main()
{
   struct node *root = NULL;

   root = insertNode(root,1);
   root = insertNode(root, 8);
   root = insertNode(root, 4);
   root = insertNode(root, 9);
   root = insertNode(root, 6);
   root = insertNode(root, 4);
   root = insertNode(root, 2);
   root = insertNode(root, 5);

   preorder(root);

   return 0;
}