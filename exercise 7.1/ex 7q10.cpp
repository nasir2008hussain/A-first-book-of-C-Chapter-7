#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,sum;
	float avg,dev[14];
	int a[14]={89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82,73};
	for(i=0;i<14;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/14.0;
	cout<<"Sum = "<<sum<<endl;
	cout<<"Average = "<<avg<<endl;
	for(i=0;i<14;i++)
	{
		dev[i]=a[i]-avg;
	}
	for(i=0;i<14;i++)
	{ 
	    cout<<a[i]<<"\t";
		cout<<dev[i]<<"\n";
	}
	cout<<endl<<"Part b\n";
	float vsum=0.0;
	float var;
	float vdev[14];
	cout<<"Squared Deviation\n";
	for(i=0;i<14;i++)
	{
		vdev[i]=pow(dev[i],2);
		cout<<vdev[i]<<"\n";
		sum=sum+vdev[i];
	}
	float vavg=sum/14.0;
	cout<<endl<<" VARIANCE "<<vavg;
	
}
