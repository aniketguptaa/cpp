//Structure is a mixture of heterogenous data types
#include<iostream>
using namespace std;
//We can also use typedef 
typedef struct student // I am making a data type structure named student
{
//	Data types (heterogenous)
	int roll;
	char house;  //Red - R Green - G Blue - B
	float fee;
}st;

int main()
{
//	struct student carry; instead of this we can use
	st carry;
	carry.roll = 06;
	carry.house = 'B';
	carry.fee = 2500.50;
	cout<<"Roll of Carry is "<<carry.roll<<endl;
	cout<<"House color of carry is "<<carry.house<<endl;
	cout<<"Fee of carry is "<<carry.fee<<endl;
	return 0;
}
