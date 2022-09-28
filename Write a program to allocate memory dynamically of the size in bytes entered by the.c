/******************************************************************************
  Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{    int *p;
    int s;
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
        printf("%d ",p[i]);
    }
   return 0;
}
/*Enter the size of array
123456789101112131415161718192021222324252627282930
memory allocation is failed*/


