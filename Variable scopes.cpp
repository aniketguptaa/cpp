#include<iostream>
using namespace std;
int glovar = 100; //This is a global variable
void sum()
{
	int a;
	cout<<glovar;
}
int main()
{
	int glovar = 500; //Creating a local variable
	glovar = 501; //Modifying a local variable
	sum();
	cout<<glovar;
//	<< is known as insertion operator
}
