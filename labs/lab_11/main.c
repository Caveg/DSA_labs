#include <stdio.h>
#include "headers/binary_tree.h"

int main() {
    Node *root = createNewNode(5);
    insertLeft(root, 3);
    insertRight(root, 1);
    Node *temp = insertLeft(root->left, 4);
    insertRight(root->left, 2);
    //insertLeft(temp, 8);
    //insertRight(temp, 9);
    insertLeft(root->right, 6);
    //insertRight(root->right, 7);

    ///traversals
    printf("\nPreorder: ");
    preorderTraversal(root);
    printf("\nInorder: ");
    inorderTraversal(root);
    printf("\nPostorder: ");
    postorderTraversal(root);

    ///deallocate
    destroyBinaryTree(&root);


    return 0;
}
