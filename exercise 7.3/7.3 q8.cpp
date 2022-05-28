#include<iostream>
#include<cmath>
using namespace std;
const int k=14;
float calavg(int vals[k])
{
	int i,sum=0;
	for(i=0;i<k;i++)
	{
		sum=sum+vals[i];
	}
	float average;
	average=sum/14.0;
	return average;
	
}
float variance(int vvals[k])
{
	int i;
	float vsum=0;
	float vavg=calavg(vvals);
	float sub[k],pow[k];
	for(i=0;i<k;i++)
	{
		sub[i]=vvals[i]-vavg;
		pow[i]=(sub[i]*sub[i]);
		vsum=vsum+pow[i];
	}
	float vvavg=vsum/14.0;
	return vvavg;
	
	
}
int main()
{
	int testval[k]={89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82,73};
	float avg=calavg(testval);
	cout<<"Average is : "<<avg<<endl;
	float favg=variance(testval);
	cout<<"Variance is : "<<favg;
	
}
