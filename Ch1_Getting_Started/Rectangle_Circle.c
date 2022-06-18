/*
 The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write
 a program to calculate the area and perimeter of the rectangle, and the area and circumference 
 of the circle.
*/
#include<stdio.h>
int main(){
	float l,b,r;
	printf("Enter length and breadth of Rectangle\n");
	scanf("%f %f",&l,&b);
	printf("Enter radius of Circle\n");
	scanf("%f",&r);
	printf("Area of Rectangle : %f\n",l*b);	
	printf("Perimeter of Rectangle : %f\n",2*(l+b));
	printf("Area of Circle : %f\n",3.14*r*r);	
	printf("Circumference of Circle : %f\n",2*3.14*r);
}
