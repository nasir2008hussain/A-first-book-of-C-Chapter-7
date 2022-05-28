#include<iostream>
using namespace std;
int main()
{
	int num=14,i;
	char str[num]="This is a test";
	
	for(i=10;i<14;i++)
	{
		cout<<str[i];
		
	}
	cout<<endl;
	cout<<str<<"\0";
	cout<<"\n";
	i=0;
	while(str[i]!='\0')
	{
		cout<<str;
		i++;
	}
}
