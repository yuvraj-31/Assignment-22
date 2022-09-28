/******************************************************************************
  Write a program to demonstrate dangling pointers in C.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int *p;
    p=(int*)malloc(sizeof(int));
    free(p);
    *p=8;
    printf("%d",*p); //here it will show no error but here p becomes dangling pointer
   return 0;
}


