#include<iostream>
using namespace std;
int sort(int a[2][6])
{
	int i, j, k, temp, temp1;
		cout<<"\n\nAFTER SORTING : \n";
	for (i = 0; i<6; i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[0][j]<a[0][j+1])
			{
				temp=a[0][j];
				a[0][j]=a[0][j+1];
				a[0][j+1]=temp;
				
				temp1=a[1][j];
				a[1][j]=a[1][j+1];
				a[1][j+1]=temp1;
			}
		}
	}
	cout<<"PART NO : ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<6;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
		if(i<1)
		 cout<<"QUANTITY  : ";
	}
	
}
int main()
{
	int b[2][6] = {{ 1001,949,1050,867,346,1025 },{ 62, 85,  33,125, 59,105 }};
	int i, j;
	cout<<"BEFOR SORTING : \n";
	cout<<"PART NO : ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<6;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
		if(i<1)
		 cout<<"QUANTITY  : ";
	}
	sort(b);

}
