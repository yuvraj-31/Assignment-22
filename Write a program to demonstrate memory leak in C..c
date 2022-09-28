/******************************************************************************
  Write a program to demonstrate memory leak in C.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int sum();
int main()
{   
    
    sum();
    printf(" here Memory is leaked in sum function , we can't access the dynamic varibale becuase we don't have the name or adress of that variable and this comes under the consumed area\n");
   return 0;
}
int sum()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=8;
}

