#include<iostream>
using namespace std;
int main()
{
	int a[8],total,i;
	float avg;
	for(i=0;i<8;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<8;i++)
	{
		total=total+a[i];
	}
	avg=total/8.0;
	cout<<"Total "<<total<<endl;
	cout<<"Avg "<<avg;
}
