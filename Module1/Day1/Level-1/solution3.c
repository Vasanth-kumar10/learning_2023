#include<stdio.h>

int main()
{

int rollNo;

char name[100];

float Physics_Marks,Maths_Marks,Chemistry_Marks;

float total,percentage;

printf("Enter the Roll No of The Student:");

scanf("%d",&rollNo);

printf("Enter the Name of the Student:");

scanf(" %[^\n]",name);                                                                      //[^\n] used to take entire string as input until it encounters a newline character

printf("Enter the marks scored in Physics:");

scanf("%f",& Physics_Marks);

printf("Enter the marks scored in Maths:");

scanf("%f",& Maths_Marks);

printf("Enter the marks scored in Chemistry:");

scanf("%f",& Chemistry_Marks);

total = Physics_Marks + Maths_Marks + Chemistry_Marks;

percentage = (total / 300)*100;

printf("---------------------------Summary--------------------------\n");

printf("rollNo: %d\n",rollNo);

printf("name: %s\n",name);

printf("Physics_Marks %.2f\n",Physics_Marks);

printf("Maths_Marks %.2f\n",Maths_Marks);

printf("Chemistry_Marks %.2f\n",Chemistry_Marks);

printf("total: %.2f\n",total);

printf("percentage: %.2f\n",percentage);

return 0;

}
