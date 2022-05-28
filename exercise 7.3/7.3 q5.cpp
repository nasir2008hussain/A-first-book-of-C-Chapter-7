#include<iostream>
using namespace std;
const int rate=9;
void show(float rates[rate])
{
	int i;
	for(i=0;i<rate;i++)
	{
		cout<<rates[i]<<" ";
	}
	return ;
	
}
int main()
{
	float arr[rate]={6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8,10.0};
	show(arr);
	
	
}
