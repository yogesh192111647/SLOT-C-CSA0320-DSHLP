#include<stdio.h>
#include<conio.h>
int reverse(int num)
{
static int rev_num=0;
static int base_pos=1;
if(num>0)
{
reverse(num/10);
rev_num+=(num%10)*base_pos;
base_pos*=10;
}
return rev_num;
}
int main()
{
int num,reversed=0;
printf("enter a number:");
scanf("%d",&num);
reversed=reverse(num);
printf("Reverse of number:%d",reversed);
getch();
return 0;
}