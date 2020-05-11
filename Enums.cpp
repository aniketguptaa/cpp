#include<iostream>
using namespace std;
int main()
{
	enum food {burger, pasta, noodles}; //making a ENUM
	food f1 = burger; //burger - 0 pasta - 1 noodles - 2
//	food f2 = pasta;
//	food f3 = noodles;
//	cout<<f1<<endl;
//	cout<<f2<<endl;
//	cout<<f3<<endl;
	cout<<(f1==0); //Binary Operation 

	return 0;
}
