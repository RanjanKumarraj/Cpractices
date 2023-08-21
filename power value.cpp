#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int base,power;
	double result;
	
	printf("Enter the value and power-\n");
	scanf("%d\n%d",&base,&power);
	result = pow(base,power);
	printf("The value is-%lf",result);
	return 0;
	
}
