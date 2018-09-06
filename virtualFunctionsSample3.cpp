#include<iostream>
#include<string>

using namespace std;

class TariffCalculation
{	
  public:
	virtual void readTariff()=0;
	virtual float calculateEnergyCharges()=0;
	virtual float calculateFixedCharges()=0;
	virtual float calculateDutyCharges()=0;
	virtual float calculateCustomerCharges()=0;    
};
class DomesticCalculation:public TariffCalculation
{
public:
    void readTariff()
    {
	cout<<"\n Domestic ReadTariff function"<<endl;
    }
    float calculateEnergyCharges()
    {
	cout<<"\n Domestic Returning energy charges calculate"<<endl;
    }
    float calculateFixedCharges(){cout<<"Fixed charges"<<endl;}
    float calculateDutyCharges(){}
    float calculateCustomerCharges(){}
};
class NonDomesticCalculation:public TariffCalculation
{
  public:
    void readTariff()
    {
	cout<<"\n NonDomestic ReadTariff function"<<endl;
    }
    float calculateEnergyCharges()
    {
	cout<<"\n NonDomestic Returning energy charges calculate"<<endl;
    }
    float calculateFixedCharges(){}
    float calculateDutyCharges(){}
    float calculateCustomerCharges(){}  
};

int main()
{	
    TariffCalculation *trfObj[2]; 
    trfObj[0] = new DomesticCalculation();
    trfObj[1] = new NonDomesticCalculation();
   
    for(int i=0;i<2;i++)
    {
      cout<<"\n "<<sizeof(trfObj[i])<<endl;
      trfObj[i]->readTariff();
      trfObj[i]->calculateEnergyCharges();
      trfObj[i]->calculateFixedCharges();
    }
    
    
    
    return 0;
}