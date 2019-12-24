#include<stdio.h>
#include<stdlib.h>
//#include<iostream>

int main(void) 
{ 
    int *ptr = (int*)malloc(1024);
   
    free(ptr);  
    return 0; 
} 
