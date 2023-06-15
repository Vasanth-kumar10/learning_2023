#include<stdio.h>

int biggestOfTwoNumbers(int *num1,int *num2){                       //Using if-else method

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

int biggest = biggestOfTwoNumbers(&num1,&num2);                    

printf("The biggest number is: %d\n",biggest);

return 0;

}
