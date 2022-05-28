#include<iostream>
using namespace std;
int main()
{
	char arr1[50]="good Morning;";
	char arr2[50]="How are you?";
	char arr3[50]="I am fine ";
	cout<<arr1<<"\0"<<arr2<<"\0"<<arr3;
}
