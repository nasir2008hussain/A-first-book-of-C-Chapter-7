#include<iostream>
using namespace std;
int main()
{
	int money=24,year=50;
	double in_money=0;
	cout<<"Years\tMoney\n";
	while(year<=400)
	{
		in_money=in_money+(24*0.04)*50;
		cout<<year<<"\t"<<in_money<<endl;
		year=year+50;
		
		
	}
	
}
