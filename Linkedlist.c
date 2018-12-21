#include<stdio.h>
#include<string.h>
#include <stdlib.h>
typedef struct Employee
{
    int emp_no;
    char name[10]; 
    struct Employee *next;
}employee;

int main()
{
    employee *emp[5];
    int i,temp_empno;
    char temp_name[10];
    for(i=0;i<5;i++)
    {
      emp[i] = malloc(sizeof(employee));
    }
    
    for(i=0;i<5;i++)
    {		
	//scanf("%d",&temp_empno);
	printf("\n Enter Employee %d empno:",i);
	scanf("%d",&(emp[i]->emp_no));
	//printf("\n Enter Employee %d name:",i);
	//scanf("%s",(emp[i]->name));	 
	//scanf("\n Enter Employee name:%s",(emp[i]->name));	
	emp[i]->next=(i==4)?NULL:emp[i+1];
    }    
    
    

    return 0;
}
