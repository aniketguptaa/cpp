//Exercise on pointer for better understanding
#include<iostream>
using namespace std;
int main()
{
	int student_no = 06;
	int *roll_no = &student_no;
	cout<<"The name of student is Aniket Gupta and his roll is "<<*roll_no<<endl;
	return 0;
}
