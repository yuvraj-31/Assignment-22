/******************************************************************************
Write a program to calculate the sum of n numbers entered by the user using malloc
and free.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int s;
    int sum=0;
    printf("Enter the size of array\n");
    scanf("%d",&s);
    p=(int*)malloc(s*sizeof(int));
    if(p==NULL)
    {
        printf("memory allocation is failed\n");
        return 0;
    }
    printf("Enter the no's\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<s;i++)
    {
        sum=sum+p[i];
    }
    printf("sum = %d",sum);
    free(p);
    return 0;
}

