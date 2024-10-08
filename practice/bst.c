/* Implementation Binary Search Tree in C.
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} Node;

int contains(const Node *root, int value)
{
	// Waiting to be implemented
    if(root->value==value)
        return 1;
    else
    {
        if(root->value<value && root->right!=NULL)
            return contains(root->right, value);
        else if(root->value>value && root->left!=NULL)
            return contains(root->left, value);
        else
            return 0;
    }
    
    return 0;
}

int main()
{
    Node n1 = {.value=1, .left=NULL, .right=NULL};
    Node n3 = {.value=3, .left=NULL, .right=NULL};
    Node n2 = {.value=2, .left=&n1, .right=&n3};

    printf("%d\n", contains(&n2, 3));
    
    return 0;
}
