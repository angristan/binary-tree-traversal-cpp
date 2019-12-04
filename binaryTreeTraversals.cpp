// binary tree traversal methods

#include <iostream>
#include "arrayQueue.h"
#include "binaryTreeNode.h"
#include "myExceptions.h"

using namespace std;

template <class T>
void visit(binaryTreeNode<T> *x)
{// visit node *x, just output element field.
   cout << x->element << ' ';
}

template <class T>
void preOrder(binaryTreeNode<T> *t)
{
   //Complete the code

   if (t != NULL)
   {
      visit(t);                 // visit tree root
      preOrder(t->leftChild);   // do left subtree
      preOrder(t->rightChild);  // do right subtree
   }
}

template <class T>
void inOrder(binaryTreeNode<T> *t)
{
   //Complete the code below

}

template <class T>
void postOrder(binaryTreeNode<T> *t)
{
   //Complete the code below

}

template <class T>
void levelOrder(binaryTreeNode<T> *t)
{
   //Complete the code below
   
   arrayQueue<binaryTreeNode<T>*> q;
   

}

int main(void)
{
   /*
   // Sample: create a binary tree: Sample 
   binaryTreeNode<int> *top, *left, *right;
   left = new binaryTreeNode<int> (4);
   right = new binaryTreeNode<int> (5);
   head = new binaryTreeNode<int> (2, y, z);

   // Sample: traverse x in all ways
   cout << "Inorder: ";
   inOrder(head);
   cout << endl;
   */

   /* Your input tree:
    *
    *          1
    *	      / \
    *        2   3
    *       / \
    *      4   5
    *
    */

   /* Your output:
    *
    * $> ./binaryTreeTraversals
    *
    *     Inorder: 4 2 5 1 3
    *     Preorder: 1 2 4 5 3
    *     Postorder: 4 5 2 3 1
    *     Level order: 1 2 3 4 5
    *
    */

   //Complete the code below
  




   return 0;
}
