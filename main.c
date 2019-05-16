#include <stdio.h>
#include <stdlib.h>

#include "ref/demo.h"




int main(int argc, char *argv[])
{
    // Binary Tree
    Demo_Binary_Tree();
    
    // Selection Sort
    Demo_Selection_Sort();

    // Binary Search
    // 8.21.32.34.51.64
    // are in search
    Demo_Binary_Search(argv[1]);
        
    
    return 0;
}