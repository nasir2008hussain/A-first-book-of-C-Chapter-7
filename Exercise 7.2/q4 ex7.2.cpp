#include<iostream>
using namespace std;
int main()
{
	float price[5]={9.92,6.32,12.63,5.95,10.29};
	float amount[5],unit[5],total=0.0;
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter unit # "<<i;
		cin>>unit[i];
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
		amount[i]=price[i]*unit[i];
	}
	cout<<"Price\tUnit\tAmount\n";
	for(i=0;i<5;i++)
	{
		cout<<price[i]<<"\t"<<unit[i]<<"\t"<<amount[i]<<endl;
		total=total+amount[i];
	}
	cout<<endl;
	cout<<"Total : "<<total;
}
