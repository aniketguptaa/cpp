#include<iostream>
using namespace std;
int main()
{
	int i=2;
//	Example of continue statement
	for(i = 0; i<= 40; i++)
	{
		if(i==2)
		{
			continue;
		}
		cout<<i<<endl;
	}
//	Example of break statement
//		for(i = 0; i<= 40; i++)
//	{
//		if(i==2)
//		{
//			break;
//		}
//		cout<<i<<endl;
//	}
	return 0;
}
