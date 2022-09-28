/******************************************************************************
Define a function to input variable length string and store it in an array without
memory wastage.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    p=(char*)malloc(sizeof(char));
    char c;
    int j=1;
    int i=0;
    while(c!='\n')
    {
       c=getc(stdin);
       j++;
       p=(char*)realloc(p,j*sizeof(char));
       *(p+i)=c;
        i++;
       
    }
    *(p+i)='\0';
    printf("%s",p);

    return 0;
}
