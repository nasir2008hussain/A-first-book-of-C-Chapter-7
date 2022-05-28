#include<iostream>
using namespace std;
int main()
{
	cout<<"ENTER YOUR ENTRIES [3][5] : ";
	int a[3][5],i,j;
   
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	int c6=0,c67=0,c78=0,c89=0,c90=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]<60)
			 c6++;
			else if(a[i][j]>=60&&a[i][j]<70)
			 c67++;
			else if(a[i][j]>=70&&a[i][j]<80)
			 c78++;
			else if(a[i][j]>=80&&a[i][j]<90)
			 c89++;
			else
			 c90++; 
		}
    }
    cout<<"Range <60 : "<<c6<<endl;
    cout<<"Range 60 to 70 "<<c67<<endl;
    cout<<"Range 70 to 80 "<<c78<<endl;
    cout<<"Range 80 to 90 "<<c89<<endl;
    cout<<"Range >=90 " <<c90<<endl;
	
}
