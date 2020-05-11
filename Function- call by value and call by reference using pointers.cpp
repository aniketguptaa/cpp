#include<iostream>
using namespace std;
//This will not swap the value
void swap(int a, int b)
{
	int temp = a;  
    a = b;
    b = temp;
}
//call by reference with help of pointers
void swapPointer(int* a , int* b)
{
	int temp = *a;  
    *a = *b;
    *b = temp;
}
//call by reference with C++ reference variabe
void swapReferVar(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int x = 1, y = 2 ;
	cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
//	swap(x,y); this will ot swap the values
//	swapPointer(&x, &y); this will swap values with pointers
	swapReferVar(x,y); // this will swap values with c++ refer vars
	cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
	
	return 0;
}
