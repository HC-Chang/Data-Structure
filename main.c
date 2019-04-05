#include <stdio.h>
#include <stdlib.h>

#include "ref/binary_tree.c"




int main(int argc, char *argv[])
{
    // 0
    Tree* root = l_root();
    Tree* temp = root;

    // 1
    tree_next(root,Left);
    // 2
    tree_next(root,Right);
    // 3
    tree_next((Tree*)root->left,Left);
    // 4
    tree_next((Tree*)root->left,Right);
    // 5
    tree_next((Tree*)root->right,Left); 
    // 6
    tree_next((Tree*)root->right,Right);
    
    // 7.8
    temp = (Tree*)root->left;
    temp = (Tree*)temp->left;
    tree_next(temp,Left);
    tree_next(temp,Right);
    
    // 9.10
    temp = (Tree*)root->left;
    temp = (Tree*)temp->right;
    tree_next(temp,Left);
    tree_next(temp,Right);

    // 11.12
    temp = (Tree*)root->right;
    temp = (Tree*)temp->left;
    tree_next(temp,Left);
    tree_next(temp,Right);

    // 13.14
    temp = (Tree*)root->right;
    temp = (Tree*)temp->right;
    tree_next(temp,Left);
    tree_next(temp,Right);



    // tree_print_info(current);

    // tree_print(root);
    // tree_print(current);



    // Tree Traversal
    tree_traversal(root,PreOrder);
    tree_traversal(root,InOrder);
    tree_traversal(root,PostOrder);
    tree_traversal(root,LevelOrder);

    printf("\n");
    

        
    
    return 0;
}