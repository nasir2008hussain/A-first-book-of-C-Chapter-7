#include<iostream>
using namespace std;
float extend(float price[10],float quantity[10],float amount[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		
		amount[i]=price[i]*quantity[i];
	}
	return amount[i];
	
}
int main()
{
	int i;
	float a[10]={10.62,14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15,3.98};
	float b[10]={4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
	float c[10];
	extend(a,b,c);
	cout<<"Qty\tPrice\tAmount"<<endl;
	for(i=0;i<10;i++)
	{
	cout<<a[i]<<"\t";
	cout<<b[i]<<"\t";
	cout<<c[i]<<endl;
		
	}
	
	
}
