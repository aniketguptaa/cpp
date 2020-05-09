//Control structures: If- else with a demo program
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number to print wheather it is ODD or EVEN: "<<endl;
	cin>>num;
	
	if(num%2==0)
	{
		cout<<"This is an Even Number"<<endl;
	}
	else
	{
		cout<<"This is an Odd Number"<<endl;
	}
	return 0;
}
