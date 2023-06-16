#include<stdio.h>
#include<limits.h>

void smallestAndLargestDigit(int num, int *max, int *min){
    int original_num = num;
    int rem;
    if(num >= 0 && num <= 9){
        printf("In the given number %d, the output is Invalid!\n",original_num);
        return;
    }

    while(num != 0){
        rem = num % 10;
        if(rem > *max){
            *max = rem;
        }

        if(rem < *min){
            *min = rem;
        }
        num /= 10;    
    }
     printf("In the given number %d, the Smallest digit is %d and the largest digit is %d\n",original_num,*min,*max);
}

int main()
{
    int n, max=INT_MIN, min=INT_MAX;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter the %d numbers:\n",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&numbers[i]);
    }
    for(int i = 0; i < n; i++){
    smallestAndLargestDigit(numbers[i],&max,&min);
    }
   
    return 0;
}