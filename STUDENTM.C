#include<stdio.h>
#include<conio.h>
int main()
{
int marks[7];
int i,totalMarks=0;
float percentage;
for(i=0;i<7;i++)
{
printf("Enter marks for subject %d:",i+1);
scanf("%d",&marks[i]);
totalMarks += marks[i];
}
percentage=(float)totalMarks/(7*100)*100;
if(percentage>=80){
printf("Division:Distribution\n");
} else if (percentage >= 60 && percentage <= 79) {
printf("Division:First Division\n);
} else if (percentage >= 45 && percentage <= 59) {
printf("Division:Second Division\n");
} else if (percentage >=32 && percentage <= 44) {
printf("Division:Third Division\n");
} else {
printf("Division:Fail\n");
}
printf("Total Marks: %d\n",totalMarks);
printf("percentage:%.2f%%\n",percentage);
getch();
return 0;
}