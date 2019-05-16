#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.c"
#include "selection_sort.c"
#include "binary_search.c"

// SECTION Demo

// Binary Tree
void Demo_Binary_Tree()
{   
    printf("--- Binary Tree ---\n");

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

}

// Selection Sort
void Demo_Selection_Sort()
{
    printf("--- Selection Sort ---\n");
    int values [Length] ={34,8,64,51,32,21};
    printf("\nBefore:\n");
    print_array(values,Length);
    printf("\n");
    

    // 選擇排序法
    selection_sort(values,Length);
    printf("\nAfter:\n");
    print_array(values,Length);
    printf("\n");
}

// Binary Search
void Demo_Binary_Search(char* argv)
{
    printf("--- Binary Search ---\n");
    
    int values [Length] ={8,21,32,34,51,64};
    // int values [7] ={4,8,21,32,34,51,64};

    int ii = 0;
    ii = atoi(argv);

    printf("target: %i\n",ii);
    
    binary_search(values,Length,ii);
}

// !SECTION

