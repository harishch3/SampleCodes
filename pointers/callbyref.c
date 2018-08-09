#include<stdio.h>

void swap(char *c1,char *c2)
{
    char c3; 
    int i;
    c3 = *c1;
    *c1 = *c2;
    *c2 = c3;
    
    for(i=0;i<26;i++)
    {
	printf("\n %c",*c1+i);
    }
}
int main()
{
    char c1='H',c2='A';
    int i;
    swap(&c1,&c2);
    printf(" \n%c , %c\n",c1,c2);
    
    
}