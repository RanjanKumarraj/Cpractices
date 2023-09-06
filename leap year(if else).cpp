#include<stdio.h>
#include<conio.h>
int main()
{   
   int y;
   printf("Enter a Year-");
   scanf("%d",&y);
   
   if ( y%4==0)
   {
   	printf("This is the leap year-");
   }
   else{
   	printf("This is the not a leap year");
   }
	
	return 0;
}
