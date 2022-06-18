/*
 Paper of size A0 has dimensions 1189 mm * 841 mm. Each subsequent size A(n) is defined as A(n-1) 
 cut in half parallel to its shorter sides. Thus paper of A1 would have dimensions 841 mm *594 mm.
 Write a program to calculate and print paper sizes A0, A1, A2, …..A8.
*/
#include<stdio.h>

int main(){
	int a0l,a1l,a2l,a3l,a4l,a5l,a6l,a7l,a8l,a0b,a1b,a2b,a3b,a4b,a5b,a6b,a7b,a8b;
	a0l=1189;a0b=841; //given
	printf(" A0 Paper size is %dmm x %dmm\n ",a0l,a0b);//breadth of the previous size page will be length of 
	a1l=a0b;a1b=a0l/2;									//next page and half length of previous size page will
	printf("A1 Paper size is %dmm x %dmm\n ",a1l,a1b);//be breadth of next page
	a2l=a1b;a2b=a1l/2;
	printf("A2 Paper size is %dmm x %dmm\n ",a2l,a2b);
	a3l=a2b;a3b=a2l/2;
	printf("A3 Paper size is %dmm x %dmm\n ",a3l,a3b);
	a4l=a3b;a4b=a3l/2;
	printf("A4 Paper size is %dmm x %dmm\n ",a4l,a4b);
	a5l=a4b;a5b=a4l/2;
	printf("A5 Paper size is %dmm x %dmm\n ",a5l,a5b);
	a6l=a5b;a6b=a5l/2;
	printf("A6 Paper size is %dmm x %dmm\n ",a6l,a6b);
	a7l=a6b;a7b=a6l/2;
	printf("A7 Paper size is %dmm x %dmm\n ",a7l,a7b);
	a8l=a7b;a8b=a7l/2;
	printf("A8 Paper size is %dmm x %dmm\n ",a8l,a8b);
	
	
	
	
	return 0;
}
