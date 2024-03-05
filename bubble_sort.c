#include <stdio.h>

int bubble_sort(int *arry, int size)
{
    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(arry[i] > arry[j])
            {
                swap(arry[i], arry[j])
            }
        }
    }
}