#include<stdio.h>

int alternateSum(int arr[],int length){
    int sum = 0;
    
    for(int i = 0; i < length; i+=2){
            sum += arr[i];
        }
    return sum;
}

int main(){
    int length;
    printf("Enter the length of the array : ");
    scanf("%d",&length);
    int arr[length];
    for(int i = 0; i < length; i++){
  
        printf("Enter the array elements arr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    int result = alternateSum(arr,length);
    printf("The sum of alternate elements is : %d",result);
    return 0;
}