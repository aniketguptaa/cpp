#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	switch(age)
	{
		case(18):
			cout<<"You are age 18"<<endl;
			break;
		case(12):
			cout<<"You are under age"<<endl;
		default:
			cout<<"wrong choice"<<endl;
			break;
	}
	return 0;
}
