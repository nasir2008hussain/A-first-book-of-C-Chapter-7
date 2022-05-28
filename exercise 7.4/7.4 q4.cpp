#include<iostream>
using namespace std;
int main()
{
	int a1[2][3]={{16,18,13},{54,91,11}},i,j;
	int a2[2][3]={{24,52,77},{16,59,69}};
	int c[4][5];
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			c[i][j]=a1[i][j]+a2[i][j];
		}
	}
	cout<<"1st arrays : \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a1[i][j]<<"\t";
}
cout<<endl;
}
cout<<endl;
cout<<"2nd arrays : \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a2[i][j]<<"\t";
		}
		cout<<endl;
	}

cout<<endl;
cout<<"Addition 1 and 2 arrays : \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
			}
			cout<<endl;
		
}
cout<<endl;

}
