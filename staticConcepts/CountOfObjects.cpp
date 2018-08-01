#include"iostream"

class Sample
{
public:
  static int count;
  Sample()
  {
      count++;
  }
};
int Sample::count =0;

int main()
{
    Sample s1,s2,s3,s4,s5,s6,s7;
    
    std::cout<<"No of Objects : "<<Sample::count<<std::endl;
}