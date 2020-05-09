//Example of Nested If-else
#include<iostream>
using namespace std;
int main()
{
	int age = 12 , age_allow = 18;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	
	if(age>age_allow)
	{
		cout<<"You will get your driving license"<<endl;
	}
	else if(age==18)
	{
		cout<<"Try next year"<<endl;
	}
	else
	{
		cout<<"No you will not able to get driving license"<<endl;
	}
	return 0;
}
