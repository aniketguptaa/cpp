//Example of using pointers and pointers see the code carefully
// '*'-----> Dereference Operator
#include<iostream>
using namespace std;
int main()
{
	int a = 56;
	
	int *b = &a; //&a simply means what is address of a in RAM
	cout<<"The address of a in RAM is "<<b<<endl; //Address of a is (RAM): 0x22fea8
	
//	Now by using dereference operator we can tell what is there on b
	cout<<"The value of b is "<<*b<<endl; //Dereference operator
	
	//Reference:
//Here the value of int a is stored in the RAM and &a is the address of a in RAM
//*b is the storage of value of a and b is the storage of address of a
	
	
	return 0;
}
