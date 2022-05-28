#include<iostream>
using namespace std;
int sort(int b[2][6])
{
	int i, j, k, temp, temp1;
	for (i = 0; i<6; i++)
	{
		for(j=0;j<5;j++)
		{
			if(b[0][j]<b[0][j+1])
			{
				temp=b[0][j];
				b[0][j]=b[0][j+1];
				b[0][j+1]=temp;
				
				temp1=b[1][j];
				b[1][j]=b[1][j+1];
				b[1][j+1]=temp1;
			}
		}
	}
	cout<<"QUANTITY : ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<6;j++)
		{
			cout<<b[i][j]<<"\t\t";
		}
		cout<<endl;
		if(i<1)
		 cout<<"PART NO  : ";
	}
}
int main()
{
	int a[2][6] = {{ 62, 85,  33,125, 59,105 },{ 1001,949,1050,867,346,1025 }};
	int i, j, k;
	cout<<"BEFOR SORTING : \n";
	cout<<"QUANTITY : ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<6;j++)
		{
			cout<<a[i][j]<<"\t\t";
		}
		cout<<endl;
		if(i<1)
		 cout<<"PART NO  : ";
	}
	cout<<"\n\nAFTER SORTING : \n";
	sort(a);
	
}
