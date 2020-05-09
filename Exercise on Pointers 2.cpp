//Write a C++ that ask a student his name, roll
//and show the student his name , roll and his roll address on memory
#include<iostream>
using namespace std;
int main()
{
	char name;
	int roll_no;
	int *proll_no = &roll_no;
	
	cout<<"What is your name: ";
	cin>>name;
	cout<<"What is your Roll no:";
	cin>>roll_no;
	
	cout<<"Your name is "<<name<<endl;
	cout<<"Your Roll no is "<<roll_no<<endl;
	cout<<"Your roll on memory is " <<proll_no<<endl;
	cout<<"Just ignore this--->"<<*proll_no<<endl;
	return 0;
}

