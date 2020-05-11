#include<iostream>
using namespace std;

//int sum(int,int) --> Acceptable
//int sum(int a, b) --> Not acceptable

int sum(int a , int b) //Formal parameters
{
	int c = a+b;
	return c;
}

//Function that doesn't return any value(void)
void print_karo()
{
	cout<<"I have done my work"<<endl;
}

//Our main and mandatory function
int main()
{
	int num1 , num2; //Actual parameters
	cout<<"Enter num1: "<<endl;
	cin>>num1;
	cout<<"Enter num2: "<<endl;
	cin>>num2;
	cout<<"The sum is "<<sum(num1, num2);
	cout<<endl;
	print_karo();
	return 0;
}
//PS: we can also use same value of actual and formal arguments


