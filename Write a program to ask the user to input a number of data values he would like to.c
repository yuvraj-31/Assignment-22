/******************************************************************************
Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int s;
    float sum=0;
    printf("Enter the size of array\n");
    scanf("%d",&s);
    p=(int*)malloc(s*sizeof(int));
    if(p==NULL)
    {
        printf("memory allocation is failed\n");
        return 0;
    }
    printf("Enter the data values\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<s;i++)
    {
        sum=sum+p[i];
    }
    printf("Average = %0.2f",sum/s);
    return 0;
}
