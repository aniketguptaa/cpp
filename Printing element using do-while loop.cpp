//Printing element using Do-While loop
#include<iostream>
using namespace std;
int main()
{
int marks[4]={12, 10, 9, 15};
    int i=0;
    do
    {
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;
    } 
	while (i<4);
	return 0;
}
