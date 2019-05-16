#include <stdio.h>
#include <stdlib.h>

#define Length 6

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

void swap_array(int list[], int a,int b)
{
    int temp = list[a];
    list[a] = list[b];
    list[b] = temp;
}

void print_array(int list [],int length)
{
    for(int i = 0;i<length;i++)
    {
        printf("%i\n",list[i]);
    }
    
}


// NOTE Selection Sort 
void selection_sort(int list[],int length)
{
    int min = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < length-1; i++)
    {
        min = i;
        for (j = i+1; j < length; j++)
        {
            if( list[min] > list[j] )
            {
                min = j;
            }
        }
        swap_array(list,i,min);
        
    }
    
}

