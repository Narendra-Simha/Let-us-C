//---------------------
/*
 Ramesh's Basic salary is input through keyboard. His dearness allowance is 40% of basic salary, and
 house rent allowance is 20% of basic salary.Write a program to Calculate his gross salary.
*/
//---------------------
#include<iostream>
using namespace std;
//Ramesh Basic Salary
int main(){//b-basic salary, d-dearness allowance, hr-house rent
	float b,d,hr,s;
	cout<<"Dear Ramesh, Enter Your Basic Salary"<<endl;
	cin>>b;
	d=0.4*b; hr=0.2*b;
	s=b+d+hr;
	cout<<"Gross Salary is "<<s<<endl;
	return 0;
	
}
