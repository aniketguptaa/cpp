//Structure is a mixture of heterogenous data types
#include<iostream>
using namespace std;

struct student // I am making a data type structure named student
{
//	Data types (heterogenous)
	int roll;
	char house;  //Red - R Green - G Blue - B
	float fee;
};

int main()
{
	struct student carry;
	carry.roll = 06;
	carry.house = 'B';
	carry.fee = 2500.50;
	cout<<"Roll of Carry is "<<carry.roll<<endl;
	cout<<"House color of carry is "<<carry.house<<endl;
	cout<<"Fee of carry is "<<carry.fee<<endl;
	return 0;
}
