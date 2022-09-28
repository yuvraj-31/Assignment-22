/******************************************************************************
Write a program to input and print text using dynamic memory allocation.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    p=(char*)malloc(sizeof(char));
    char c;
    int j=1,i=0;
    printf("Enter text\n");
    while(c!='\n')
    {   c=getc(stdin);
        j++;
        p=(char*)realloc(p,j*sizeof(char));
        p[i]=c;
        i++;
    }
    p[i]='\0';
    printf("%s",p);
    return 0;
}

