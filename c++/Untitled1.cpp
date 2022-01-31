#include<iostream>
using namespace std;

int main()
{
	int student_number,subject1,subject2,total,average;
	char student_name[20];
	cout<<"enter student number: ";
	cin>>student_number;
	cout<<"enter student name: ";
	cin>>student_name;
	cout<<"enter subject 1: ";
	cin>>subject1;
	cout<<"enter subject 2: ";
	cin>>subject2;
	total=subject1+subject2;
	average=total/2;
	cout<<"total marks is "<<total<<endl;
	cout<<"average marks is"<<average<<endl;
	return 0;
}
