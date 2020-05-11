#include<iostream>
using namespace std;
union money // I am making a union named money.
{
	int rupees;
	char dollar;
	float taka;
};

int main()
{
	union money m1;
//	m1.rupees = 72;
	m1.dollar = 'd';
	cout<<m1.dollar;
	return 0;
}

//A union is a user-defined type in which all members
//share the same memory location. This means that at 
//any given time a union can contain no more than
//one object from its list of members. It also means
//that no matter how many members a union has, it 
//always uses only enough memory to store the 
//largest member.
