#include<iostream>
using namespace std;
int main()
{
	int i,a[5],sum=0;
	float avg;
	
		for(i=0;i<5;i++)
		{
			cin>>a[i];
			if(a[i]<0)
			 break;
			sum=sum+a[i];
		}
	avg=sum/5.0	;
	cout<<"Average is "<<avg<<endl;
	for(i=0;i<5;i++)
	{
		if(a[i]<avg)
		 cout<<"*"<<a[i]<<endl;
		else 
		 cout<<a[i]<<endl; 
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>=90&&a[i]<=100)
		 cout<<a[i]<<" A grade\n";
		else if(a[i]>=80) 
		 cout<<a[i]<<" B grade\n";
		else if(a[i]>=70)
		 cout<<a[i]<<" C grade\n";
		else if(a[i]>=60)
		 cout<<a[i]<<" D grade\n";
		else 
		 cout<<a[i]<<" F grade\n" ;
	}
		
		
	
}
