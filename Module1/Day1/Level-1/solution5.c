#include<stdio.h>

int bit_operations(int num, int oper_type){
    
    switch (oper_type){
     
    case 1:
        num |= (1<<0);       //used to Set 1st bit
        break;
    
    
    case 2:
        num &= ~(1<<30);    //used to clear 31st bit
        break;
    
    
    case 3:
        num ^= (1<<15);                                          //used to toggle 16th bit
        break;
    
    default:
        printf("Invalid Operation Type\n");
        break;
    }
    return num;
}


int main(){
    
    int num =0,oper_type = 0;
    
    printf("Enter an Integer of size 32bits:");
    
    scanf("%d",&num);
    
    printf("Enter the operation type:");
    
    scanf("%d",&oper_type);
    
    int result = bit_operations(num,oper_type);
    
    printf("Result: %d",result);
    
    return 0;
}