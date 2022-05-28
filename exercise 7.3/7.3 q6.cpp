#include<iostream>
#include<cstring>
using namespace std;
void display(char m[],double m1)
{
	int i;
	cout<<"part a : ";
	for(i=0;i<m1;i++)
	{
		cout<<m[i];
	}
	cout<<endl;
	cout<<"part b : ";
	for(i=0;i<8;i++)
    {
	cout<<m[i];
	}	return;
	
}
int main()
{
    double m2;
	char message[]="Vacation is near";
	m2=strlen(message);
	display(message,m2);
	
}
