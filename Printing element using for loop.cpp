//Printing elements of array using For loop
#include<iostream>
using namespace std;
int main()
{
	int a[] = {99,33,44,34};
	int i = 0;
//	cout<<a[0]<<endl;
//	cout<<a[1]<<endl;
//	cout<<a[2]<<endl;
//	cout<<a[3]<<endl;

	for (i=0;i<=3;i++)
	{
		cout<<"the value of 'a' at "<<i<<" is "<<a[i]<<endl;
		a[i]+=1;
	}
	return 0;
}
