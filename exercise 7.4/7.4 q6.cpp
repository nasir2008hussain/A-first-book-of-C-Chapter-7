#include<iostream>
using namespace std;
int main()
{
	int a[4][5]={{16, 22, 99, 4, 18}, {-258, 4, 101, 775, 98}, {105, 6, 15, -992, 45}, {33, 88, 72, 16,3}},i,j;
   
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	int k=0,l;
	int sort[k];
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>=0)
			{
				sort[k]=a[i][j];
				k++;
			}
		}
	}
	cout<<"\nWihtout ascending Positive \n";
	for(i=0;i<k;i++)
	{
		cout<<sort[i]<<"\t";
	}
	cout<<endl;
	int app;
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(sort[i]>sort[j])
			{
				app=sort[i];
				sort[i]=sort[j];
				sort[j]=app;
			}
		}
	}
	cout<<endl;
	cout<<"Ascending order positive : "<<endl;
	for(i=0;i<k;i++)
	{
		cout<<sort[i]<<"\t";
	}
}
