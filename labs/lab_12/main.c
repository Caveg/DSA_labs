#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers/binary_search_tree.h"

int main() {
    srand(time(NULL));
    Node *root = NULL;
    // int n = 10;
    // int items[10];

    // for (int i = 0; i < n; ++i) {
    //     items[i] = 500 + rand() % (978 - 500);
    // }
    //
    // Node *root = createNewNode(items[0]);
    // for (int i = 1; i < n; ++i) {
    //     insert(root, items[i]);
    // }

    for (int i = 0; i < 10; ++i) {
        int value = 500 + rand() % (978 - 500);
        printf("Inserting: %d\n", value);
        if (root == NULL) {
            root = createNewNode(value);
        } else {
            insert(root, value);
        }
    }

    printf("\nInorder: ");
    inorderTraversal(root);
    //
    // deleteNode(root, 17);
    // printf("\nInorder: ");
    // inorderTraversal(root);
    //
    // deleteNode(root, 15);
    // printf("\nInorder: ");
    // inorderTraversal(root);
    //
    // deleteNode(root, 7);
    // printf("\nInorder: ");
    // inorderTraversal(root);
    //
    // destroyBinaryTree(&root);

    return 0;
}
