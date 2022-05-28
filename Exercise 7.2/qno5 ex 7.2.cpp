#include<iostream>
using namespace std;
int main()
{
	int a[20]={39,41,-75,-13,-98,64,-99,0,21,0,-33,-98,54,-76,34,-81,0,87,-20,78};
    int i;
    int j=0,k=0;
	int p[20],n[20];
	
	for(i=0;i<20;i++)
	{
		if(a[i]>=0)
		 {
		  p[j]=a[i];
		 j++;
		 	
		 }
		else
		{
		n[k]=a[i];
		k++;	
		 } 
	}
	cout<<"Positive Number\n";
	for(i=0;i<j;i++)
	{
		cout<<p[i]<<"\t";
	}
	cout<<"\n\n Sorting Ascending"<<endl;
	int h,ass;
	for(i=0;i<j;i++)
	{
		for(h=i+1;h<j;h++)
		{
			if(p[i]>p[h])
			{
				ass=p[i];
				p[i]=p[h];
				p[h]=ass;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		cout<<p[i]<<"\t";
	}
	cout<<endl;
	cout<<"\n Sorting Descending"<<endl;

	for(i=0;i<j;i++)
	{
		for(h=i+1;h<j;h++)
		{
			if(p[i]<p[h])
			{
				ass=p[i];
				p[i]=p[h];
				p[h]=ass;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		cout<<p[i]<<"\t";
	}
	cout<<endl;
	cout<<"\n Negative Number \n";
	for(i=0;i<k;i++)
	{
		cout<<n[i]<<"\t";
	}
	cout<<"\n\n Sorting Ascending"<<endl;
	for(i=0;i<k;i++)
	{
		for(h=i+1;h<k;h++)
		{
			if(n[i]>n[h])
			{
				ass=n[i];
				n[i]=n[h];
				n[h]=ass;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<n[i]<<"\t";
	}
	cout<<endl;
	cout<<"\n Sorting Descending"<<endl;

	for(i=0;i<k;i++)
	{
		for(h=i+1;h<k;h++)
		{
			if(p[i]>p[h])
			{
				ass=n[i];
				n[i]=n[h];
				n[h]=ass;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<n[i]<<"\t";
	}
	cout<<endl;
}
