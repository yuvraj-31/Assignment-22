/******************************************************************************
Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.
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
    for(int i=0;i<s;i++)
    {
        printf("%d ",p[i]);
    }
    for(int i=0;i<s;i++)
    {
        sum=sum+p[i];
    }
    printf("\nSum = %d",sum);
    return 0;
    
}

