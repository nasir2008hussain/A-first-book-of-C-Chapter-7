#include<iostream>
using namespace std;
int main()
{
	int i;
	int a[5]={23,45,21,34,12};
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	for(i=4;i>=0;i--)
	{
		cout<<a[i]<<"\t";
	}
}
