/******************************************************************************
 Write a program in C to find the largest element using Dynamic Memory Allocation.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int s,sum=0;
    printf("Enter the size of an array\n");
    scanf("%d",&s);
    p=(int*)malloc(s*sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation is failed\n");
        return 0;
    }
    for(int i=0;i<s;i++)
    {
        scanf("%d",p+i);
    }
   int  largest=*p;
    for(int i=1;i<s;i++)
    {
        if(largest<p[i])
        {
            largest=p[i];
        }
    }
   
    printf("largest no = %d",largest);
    free(p);
    return 0;
    
}

