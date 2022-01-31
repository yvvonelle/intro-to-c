#include<iostream>
using namespace std;
int main()
{
	int student_number,marks1,marks2,total,average;
	char student_name[15];
	cout<<"enter student number: ";
	cin>>student_number;
	cout<<"enter student name: ";
	cin>>student_name;
	cout<<"enter marks1: ";
	cin>>marks1;
	cout<<"enter marks 2: ";
	cin>>marks2;
	total=marks1+marks2;
	cout<<"total is"<<total<<endl;
	average=total/2;
	cout<<"average is"<<average<<endl;
	if(average>=50)
		cout<<"pass";
	else
		cout<<"fail";
		
	return 0;
}
