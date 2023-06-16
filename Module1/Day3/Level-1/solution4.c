#include<stdio.h>

int findLargestNumber(int num){
    int max = 0;
    int divisor = 1;
    
    while(divisor <= num){
        int temp = (num / divisor /10) * divisor + (num % divisor);
        max = (temp > max) ? temp : max;
        divisor *= 10;
    }
    
    return max;
}

int main()
{
    int num;
    printf("Enter the 4-digit number:");
    scanf("%d",&num);
    if(num <= 1000 || num > 10000){
        printf("Invalid Input!");
    }
    else{
        int result = findLargestNumber(num);
        printf("The largest number by deleting a single digit in %d is %d",num,result);
    }
    
    return 0;
}