//Array is a collection of Homogenous data types
#include<iostream>
using namespace std;
int main()
{
	int a[] = {99,33,44,34}; //Array initialisation and elements of array
	cout<<a[0]<<endl;
	a[2] = 66;  //changing the element value of a[2]= 66
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	//we can create more array
	int b[] = {99,33,44,55};
	cout<<b[0]<<endl;
	cout<<b[1]<<endl;
	cout<<b[2]<<endl;
	cout<<b[3]<<endl;
	return 0;
}
