#include<stdio.h>

int biggestOfTwoNumbers(int *num1,int *num2){

int max = *num1>*num2? *num1:*num2;                                  //to check greatest of two using ternary operator

return max;

}

int main(){

int num1,num2;

printf("Enter the values of num1 and num2:");

scanf("%d %d",&num1,&num2);

int biggest = biggestOfTwoNumbers(&num1,&num2);                //function calling

printf("The biggest number is: %d",biggest);

return 0;

}