#include<iostream>
using namespace std;
//Function prototype
//type function name(arguments)

int sum(int a, int b);
void print_karo(void);
//void print_karo(); --Acceptable

int main()
{
	int num1 , num2;
	cout<<"Enter num1: "<<endl;
	cin>>num1;
	cout<<"Enter num2: "<<endl;
	cin>>num2;
	cout<<"The sum is "<<sum(num1, num2);
	cout<<endl;
	print_karo();
	return 0;
}

int sum(int a , int b)
{
	int c = a+b;
	return c;
}

//Function that doesn't return any value(void)
void print_karo()
{
	cout<<"I have done my work"<<endl;
}

