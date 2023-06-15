#include<stdio.h>

int biggestOfTwoNumbers(int *num1,int *num2){                       //function to take two numbers as input using call by reference

if(*num1>*num2)

{

return *num1;

}

else {
 
return *num2;

}

}

int main(){

int num1,num2;

printf("Enter the values of a and b:");

scanf("%d %d",&num1,&num2);

int biggest = biggestOfTwoNumbers(&num1,&num2);                    //function calling

printf("The biggest number is: %d\n",biggest);

return 0;

}