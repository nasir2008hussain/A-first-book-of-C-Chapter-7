#include<iostream>
using namespace std;
const int minmal=5;
int findmin(int min[minmal]);
int main()
{

	int arr[minmal]={45,65,41,67,34};
	cout<<"Minmum : "<<findmin(arr);
}
int findmin(int min[minmal])
{
	int mini,i;
	mini=min[0];
	for(i=1;i<minmal;i++)
	{
		if(mini>min[i])
		 mini=min[i];
	 
	}
	return mini;
	
}

