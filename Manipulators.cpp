#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a = 1, b = 22, c = 333;
	cout<<"The value of a without setw "<<a<<endl;
	cout<<"The value of b without setw "<<b<<endl;
	cout<<"The value of c without setw "<<c<<endl;
	//Using Setw() with 4 space
	cout<<"The value of a without setw "<<setw(4)<<a<<endl;
	cout<<"The value of b without setw "<<setw(4)<<b<<endl;
	cout<<"The value of c without setw "<<setw(4)<<c<<endl;
	return 0;
//	For order precedence visit cppreference.com
}
