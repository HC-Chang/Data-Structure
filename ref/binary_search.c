#include <stdio.h>
#include <stdlib.h>

// NOTE Binary Search
void binary_search(int list[],int length, int target)
{
    int index = length/2;
    int left = 0;
    int right = length-1;
    
    while(right > left)
    {
        if (list[index] == target)
        {
            break;
        }
        
        else if(list[index] > target)
        {
            right = index-1;
            
        }

        else if(list[index] < target)
        {
            left = index+1;
            
        }

        index = (right+left)/2;
    }
    
    if(list[index] == target)
    {
        printf("\ntarget index: %i\n",index);
    }
    else
    {
        printf("\nNo target\n");
        
    }
    
}

