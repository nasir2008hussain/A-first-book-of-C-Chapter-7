#include<iostream>
using namespace std;
int chk(char tests[6][5],char answ[5],int answer[6])
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<5;j++)
		{
			if(tests[i][j]==answ[j])
			{
				answer[i]+=5;
			}
		}
	}
	
}
int display(char test[6][5],int mark[6])
{
	int i,j;
	for(i=0;i<6;i++)
	{
		cout<<"TEST "<<i+1<<" :  ";
		for(j=0;j<5;j++)
		{
			cout<<test[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nGRADE : \n";
	for(i=0;i<6;i++)
	{
		cout<<mark[i]<<"\t";
	}
	
}
int main()
{
	char test[6][5]={{'T' ,'F', 'T', 'T', 'T'},{'T', 'T', 'T', 'T', 'T'},{'T', 'T', 'F', 'F', 'T'},{'F', 'T', 'F', 'F', 'F'},{'F', 'F', 'F', 'F', 'F'},{'T','T', 'F' ,'T', 'F'}};
    char ans[5]={'T','T','F','F','T'};
	int answer[6]={};
	chk(test,ans,answer);
	display(test,answer);
}
