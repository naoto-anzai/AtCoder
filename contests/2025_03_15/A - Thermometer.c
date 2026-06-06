#include<stdio.h>
#include<stdlib.h>

int main(void){

	double X;
	int c;

	scanf("%lf",&X);

	if(X>=38)
		c = 1;
	else if(X>=37.5)
		c = 2;
	else
		c = 3;
	
	printf("%d",c);
}