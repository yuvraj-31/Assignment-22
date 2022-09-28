/******************************************************************************
 Find out the maximum and minimum from an array using dynamic memory allocation
in C.
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
    int min=*p;
     int max=*p;
    for(int i=0;i<s;i++)
    {
        if(min>p[i])
        {
            min=p[i];
        }
        if(max<p[i])
        {
            max=p[i];
        }
    }
    printf("Max = %d and Min = %d",max,min);
   return 0;
}



