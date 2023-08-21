#include<stdio.h>
#include<conio.h>
int main()
{
	float l,b,h,v;
	printf("Enter Cube length-\n");
	scanf("%f",&l);
	printf("Enter Cube Breadth-\n");
	scanf("%f",&b);
	printf("Enter Cube height-\n");
	scanf("%f",&h);
	v=l*b*h;
	printf("Volume of cube is %f",v);
	return 0;
	
}
