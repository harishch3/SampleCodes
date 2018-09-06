#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() 
{
    int a, b,i;
    char *arr[9]={"one","two","three","four","five","six","seven","eight","nine"};    
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int labels_index;
    scanf("%d\n%d", &a, &b);
//     (a<9)?printf("%s\n",arr[a-1]):printf("%s\n",arr[8]);
//     (b<9)?printf("%s\n",arr[b-1]):printf("%s\n",arr[8]);    
//     (a%2 == 0)?printf("even\n"):printf("odd\n");
//     (b%2 == 0)?printf("even\n"):printf("odd\n");

  	for (i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", labels[labels_index]);
    }

    return 0;
}