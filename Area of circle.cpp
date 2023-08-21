#include<stdio.h>
#include<conio.h>

int main()
{
	float rad,result;
	float pi = 3.14;
	
	printf("Enter a Radius of circle\n");
	scanf("%f",&rad);
	result = pi*rad*rad;
	printf("Area of Circle is %f\n",result);
	return 0;
	
}
