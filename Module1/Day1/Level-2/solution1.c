#include<stdio.h>

int greatestOfThreeNumber(int num1,int num2,int num3){
    
   if(num1>num2){
       if(num1>num3){
           return num1;
       }
       else{
           return num3;
       }
   }
       else if(num2>num3){
           return num2;
       }
       else{
           return num3;
       }
}

int main()

{
    
    int num1,num2,num3;
    
    printf("Enter the number 1: \n");
    
    scanf("%d",&num1);
    
    printf("Enter the number 2: \n");
    
    scanf("%d",&num2);
    
    printf("Enter the number 3: \n");
    
    scanf("%d",&num3);
    
    printf("The entered numbers are : %d,%d,%d\n",num1,num2,num3);
    
    int greatest = greatestOfThreeNumber(num1,num2,num3);
    
    printf("The greatest of three numbers is : %d",greatest);
    
    return 0;
}
