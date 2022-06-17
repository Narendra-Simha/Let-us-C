/*
Temperature of a city in Fahrenheit degree in input through the keyboard. Write a program to convert
this temperature into centigrade degrees.
*/

#include<stdio.h>
int main(){
	float f,c;//f-Fahrenheit c-centrigrade
	printf("Enter Temperature in Fahrenheit\n");
	scanf("%f",&f);
	//   f=c*(9/5)+32   =>   c=(f-32)*5/9 
	c=(f-32)*5/9;
	printf("Temperature in Fahrenheit : %f\n",f);
	printf("Temperature in Centigrade : %f",c);
	return 0;
}
