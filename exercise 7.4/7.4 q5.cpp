#include<iostream>
using namespace std;
int main()
{
	int a1[4][5]={{16, 22, 99, 4, 18}, {-258, 4, 105, 775, 98}, {105, 6, 15, -992, 45}, {33, 88, 72, 16,3}},i,j;
    int max=a1[0][0];
	int min=a1[0][0];

	int maxi=0, maxj=0;
	int mini=0, minj=0;
		for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<a1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max<=a1[i][j])
			{
				max=a1[i][j];
				maxi=i;
				maxj=j;
			}
			if(min>=a1[i][j])
			{
				min=a1[i][j];
				mini=i;
				minj=j;
			}
			
		}
	}
	int rmax;
	int k=0,l=0;
	for(i=0;i<4;i++)
	{
		rmax=a1[k][l];
		for(j=0;j<5;j++)
		{
			if(rmax<a1[k][l])
			 rmax=a1[i][j];
			l++; 
		}
		k++;
		l=0;
		cout<<"Max at row "<<k<<" "<< rmax<<endl;
	}
	cout<<endl;
	int cmax;
	int k1=0,l1=0;
	for(j=0;j<5;j++)
	{
		cmax=a1[l1][k1];
		for(i=0;i<4;i++)
		{
			if(cmax<a1[k1][l1])
			 cmax=a1[i][j];
			k1++; 
		}
		l1++;
		k1=0;
		cout<<"Max at colom "<<l1<<" "<< cmax<<endl;
	}
	cout<<endl;
	
	cout<<"Max value is "<<max<<" at row "<<maxi<<" and colom "<<maxj<<endl;
	cout<<"Min value is "<<min<<" at row "<<mini<<" and colom "<<minj<<endl;
}
