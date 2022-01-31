#include<iostream>
using namespace std;
int main()
{
	int employee_number,bs,allowance,deductions,gp,np;
	char employee_name[13];
	cout<<"enter employee number: ";
	cin>>employee_number;
	cout<<"enter employee name: ";
	cin>>employee_name;
	cout<<"enter basic salary: ";
	cin>>bs;
	allowance=0.3*bs;
	deductions=0.2*bs;
	gp=bs+allowance;
	np=gp-deductions;
	cout<<"basic salary is: "<<bs<<endl;
	cout<<"allowance is: "<<allowance<<endl;
	cout<<"deductions is: "<<deductions<<endl;
	cout<<"gross pay is: "<<gp<<endl;
	cout<<"net pay is: "<<np<<endl;
	return 0;

	
	
}
