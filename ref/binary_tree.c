#include <stdio.h>
#include <stdlib.h>

int Len = 0;

typedef struct 
{
    int index;
    int value;
    
    struct Tree* last;

    struct Tree* left;
    struct Tree* right;
}Tree;

enum{Left,Right};
enum{PreOrder,InOrder,PostOrder};

Tree* l_root(void)
{
    Tree *temp = (Tree*)malloc(sizeof(Tree));
    Len = 0;
    temp->index = Len;

    temp->value = 0;
    temp->last = NULL; 
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

Tree* tree_next(Tree* t,int lr)
{
    Len++;
    
    Tree *temp = malloc(sizeof(Tree));

    // l->next = (struct Tree*)temp;
    temp->index = Len;
    temp->value = Len*2;
    temp->left = NULL;
    temp->right = NULL;
    temp->last = (struct Tree*)t;
    if(lr == Left)
    {
        t->left = (struct Tree*)temp;
        t = (Tree*)t->left;
    }
    else if (lr == Right)
    {
        t->right = (struct Tree*)temp;
        t = (Tree*)t->right;
    }
    
    return t;
}

void tree_print_info(Tree* t)
{
    if(t == NULL)
    {
        printf("NULL\n\n");
    }
    else
    {
        printf("index - %i\n",t->index); 
        printf("value - %i\n\n",t->value);
    }
    
    
}


void tree_print(Tree* t)
{
    Tree* temp = t;
    printf("index - %i\n",temp->index);
    // printf("index - %s\n", temp == NULL? "NULL":(char)temp->index ); 
    printf("value - %i\n",temp->value);


    temp = (Tree*)t->last;
    printf("last:\n");
    tree_print_info(temp);
    
    
    temp = (Tree*)t->left;
    printf("left:\n");
    tree_print_info(temp);
    
    
    temp = (Tree*)t->right;
    printf("right:\n");
    tree_print_info(temp);
    
    printf("\n");
    
}



// Pre-Order
void tree_pre_order(Tree* root)
{
    Tree* temp = root;
    

    if(temp == NULL)
    {
        printf("--- No Child ---\n");
        
        return;
    }

    printf("\n%i",temp->index);

    if(temp->last == NULL)
    {
        printf(" - root");
    }

    if(temp->left != NULL)
    {
        temp = (Tree*)temp->left;
        tree_pre_order(temp);
        temp = (Tree*)temp->last;
        printf("-%i",temp->index);
        
    }

    if(temp->right != NULL)
    {
        temp = (Tree*)temp->right;
        tree_pre_order(temp);
        temp = (Tree*)temp->last;
        printf("-%i",temp->index);

    }

}

void tree_traversal(Tree* root, int OrderType)
{
    switch (OrderType)
    {
        case PreOrder:
            tree_pre_order(root);
            break;

        case InOrder:
            break;
        
        case PostOrder:
            break;


        default:
            break;
    }
}