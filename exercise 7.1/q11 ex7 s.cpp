#include<iostream>
using namespace std;
int main()
{
	int total[5],price[5],amount[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Price # "<<i<<" : ";
		cin>>price[i];
		
	}
	for(int i=0;i<5;i++)
	   {
	   	cout<<"Amount # "<<i<<" : ";
		cin>>amount[i];
		} 
	for(int i=0;i<5;i++)
	{
	  total[i]=price[i]*amount[i];	
	}
	
	cout<<"Total\tPrice\tAmount"<<"\n"<<"____________________\n";
	for(int i=0;i<5;i++)
	{
		cout<<total[i]<<"\t"<<price[i]<<"\t"<<amount[i]<<endl;
	}
}
