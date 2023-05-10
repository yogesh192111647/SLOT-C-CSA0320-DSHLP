#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter the numbers of aand b:");
scanf("%d%d",&a,&b);
if(a<0 && b>0 || a>0 && b<0)
printf("\nEnter the number is negative");
else
printf("\nBoth the numbers are positive");
getch();
return 0;
}
