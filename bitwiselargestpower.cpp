#include<iostream>

long largestpower(long N)
{
    N= N | (N >> 1);
    N= N | (N >> 2);
    N= N | (N >> 4);
    N= N | (N >> 5);
    return (N+1) >> 1;
}
int main()
{
    std::cout<<largestpower(656)<<std::endl;
    return 0;  
}