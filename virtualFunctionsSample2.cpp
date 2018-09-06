#include<iostream>
#include<vector>
#include<string>

using namespace std;

class MeterReading
{
  public:
	virtual void readInstantData()=0;
	virtual void readBillingData()=0;
	 
};
class LNTMeterReading:public MeterReading
{
  public:
	void readInstantData()
	{
	    std::cout<<"\n LNT Reading Instant data"<<std::endl;
	}
	void readBillingData(){}
};
class AvonMeterReading:public MeterReading
{
  public:
	void readInstantData()
	{
	    std::cout<<"\n AVON Reading Instant data"<<std::endl;
	}
	void readBillingData(){}
};
class GenusMeterReading:public MeterReading
{
  public:
	void readInstantData()
	{
	    std::cout<<"\n GENUS Reading Instant data"<<std::endl;
	}
	void readBillingData(){}
};
class HPLMeterReading:public MeterReading
{
  public:
	void readInstantData()
	{
	    std::cout<<"\n HPL Reading Instant data"<<std::endl;
	}
	void readBillingData(){}
};

int main()
{    
    MeterReading *mtrObj[4];     
    mtrObj[0] = new LNTMeterReading();
    mtrObj[1] = new AvonMeterReading();
    mtrObj[2] = new GenusMeterReading();
    mtrObj[3] = new HPLMeterReading();
    
    for(int i=0;i<4;i++)
    {
	mtrObj[i]->readInstantData();
    }
    delete *mtrObj;    
    return 0;
}