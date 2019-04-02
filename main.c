#include <stdio.h>
#include <stdlib.h>

#include "ref/binary_tree.c"




int main(int argc, char *argv[])
{
    Tree* root = l_root();
    Tree* current = root;
    current = tree_next(root,Left);
    current = tree_next(root,Right);
    current = tree_next((Tree*)root->left,Left);
    current = tree_next((Tree*)root->left,Right);
    current = tree_next((Tree*)root->right,Left); 
    current = tree_next((Tree*)root->right,Right);

    

    // tree_print_info(current);

    // tree_print(root);
    // tree_print(current);
    tree_traversal(root,PreOrder);
    printf("\n");
    

        
    
    return 0;
}