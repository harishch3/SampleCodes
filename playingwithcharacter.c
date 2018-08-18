#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c\n",&ch);
    scanf("%s\n",&s);
    gets(sen);
    printf("\n%c",ch);
    printf("\n%s",s);
    printf("\n%s\n",sen);
    return 0;
}