//-----------
/* Program Calculates Simple Interest for a set of values representing principal, number of years and 
   rate of interest*/
//----------------------------------------------------------------
#include<stdio.h>
int main(){
	//S.I=P*R*T/100
	int p,t;
	float s,r;
	printf("Enter Principal value, Rate and Duration to find Simple Interest\n");
	scanf("%d %f %d",&p,&r,&t);
	s=(p*r*t)/100;
	printf("Simple Interst is %f",s);
}
