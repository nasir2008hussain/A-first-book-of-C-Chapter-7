#include<iostream>
using namespace std;
int main()
{
	int pt[10],inf=0,chil=0,teen=0,ad=0;
	int n,i;
	for(i=0;i<10;i++)
    {
    	cin>>n;
    	if(n>=0)
    	{
    		
    		if(n==1)
    		 inf++;
    		else if(n==2)
    		 chil++;
    		else if(n==3)
			 teen++;
			else if(n==4)
			 ad++;
			else
			 cout<<"invalid\n";
		}
		else
		 break;
	}
	cout<<"Infant "<<inf<<endl;
	cout<<"Child "<<chil<<endl;
	cout<<"Teen "<<teen<<endl;
	cout<<"Adult "<<ad<<endl;
	
	
}
