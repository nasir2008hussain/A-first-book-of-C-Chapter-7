#include<iostream>
using namespace std;
int main()
{
  int i, j, val[3][4]={8,16,9,52,3,15,27,6,14,25,2,10};
  int add=0,sm,sum[3];
  for(i=0;i<3;i++)
  {
  	for(j=0;j<4;j++)
   {
  	 cout<<val[i][j]<<" ";
  	 add=add+val[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<"Sum "<<add<<endl;
 for(i=0;i<3;i++)
 {
 	sm=0;
   for(j=0;j<4;j++)
   {
   	sm=sm+val[i][j];
   }
   sum[i]=sm;
   cout<<"Sum of "<<i<<" row = "<<sum[i]<<endl;
 }


}
