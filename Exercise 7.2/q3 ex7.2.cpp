#include<iostream>
using namespace std;
int main()
{
	float a[10]={1.5,5.6,7.4,2.4,9.7,9.3,5.1,3.7,8.2,6.9};
	float max,min;
    max=a[0],min=a[0];
    int xi=0,mi=0,i;
    for(i=1;i<10;i++)
    {
    	if(max<a[i])
    	 {
    	 max=a[i];
    	 xi=i;
		 }
    	if (min>a[i])
		 {
		 min=a[i]; 
		 mi=i;	
		 }
	}
	cout<<"Max at "<<xi<<" is "<<max<<endl;
	cout<<"Min at "<<mi<<" is "<<min<<endl;
}
