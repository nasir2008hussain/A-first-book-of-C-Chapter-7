#include<iostream>
using namespace std;
int main()
{
	int grade[5][4]={{100, 100, 100, 100},{100, 0 ,100, 0},{82, 94 ,73, 86},{64, 74, 84, 94},{94, 84 ,74, 64}};
    int s[5]={1,2,3,4,5};
    int i,j,ad[5];
    int sum;
    float a1[5][4],a2=0.0,a3=0.0,a4=0.0;
    cout<<"Student\tGrade1\tGrade2\tGrade3\tGrade4\tFinal G1\tFina lG2"<<endl;
    float w0;
	for(i=0;i<5;i++)
	{
		sum=0;
		for(j=0;j<4;j++)
		{
			sum=sum+grade[i][j];
		}
		ad[i]=sum;
	}
	float avg[4];
    for(i=0;i<5;i++)
    {
    	avg[i]=ad[i]/4.0;
	}
		for(j=0;j<4;j++)
	{
		for(i=0;i<5;i++)
		{
			if(j==0)
			 a1[i][j]=grade[i][j]*0.2;
			if(j==1)
			 a1[i][j]=grade[i][j]*0.3 ;
			if(j==2)
			 a1[i][j]=grade[i][j]*0.3;
			if(j==3)
			 a1[i][j]=grade[i][j]*0.2;  
		}
	}
	float fsum;
	float f[5];
	for(i=0;i<5;i++)
	{
		fsum=0.0;
		for(j=0;j<4;j++)
		{
			fsum=fsum+a1[i][j];
		}
		f[i]=fsum;
	}
	float favg[5];
	for(i=0;i<5;i++)
	{
		favg[i]=f[i]/4.0;
	}
    for(i=0;i<5;i++)
    {
    	cout<<s[i]<<"\t";
    	for(j=0;j<4;j++)
    	{
    		
    		cout<<grade[i][j]<<"\t";
    	}
		cout<<avg[i]<<"\t";
		cout<<"\t"<<favg[i]<<"\t";
		cout<<endl;
	}

	
	
	
	






}
