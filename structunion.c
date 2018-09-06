#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
struct struct_consumer
{
    char acctid[10];
    int meterno;
};
union union_consumer
{
    char acctid[10];
    int meterno;
};
int main() 
{
    struct struct_consumer sc;
    union union_consumer uc;
    
    printf("\n %d",sizeof(sc));
    printf("\n %d\n",sizeof(uc));
    strcpy(sc.acctid,"9999999999");
    sc.meterno = 12345678;
    printf("\n %s %d\n",sc.acctid,sc.meterno);
    
    strcpy(uc.acctid,"5555555555");
    uc.meterno = 12345679;
    printf("\n %s %d\n",uc.acctid,uc.meterno);
    
    sc.meterno =12345680;
    printf("\n %s %d\n",sc.acctid,sc.meterno);
    
    strcpy(uc.acctid,"9999995555");
    printf("\n %s %d\n",uc.acctid,uc.meterno);
    return 0;
}