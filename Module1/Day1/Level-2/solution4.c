#include<stdio.h>

int bit_operations(int num,int oper_type,int pos){
    int result;
    
    if(oper_type == 1){
        result = num | (0x3 << pos);           //Set 2 bits from nth bit position
    }
    else if(oper_type == 2){
        result = num &  ~(0x7 << pos);        //Clear 3 bits from nth bit position
    }
    else if(oper_type == 3){
        result = num ^ (1<<31);               //Toggle MSB
    }
    return result;
}

int main(){
    int num,oper_type,pos;
    
    printf("Enter the integer of size 32 bits: ");
    scanf("%d",&num);
    
    printf("Enter the operation type: ");
    scanf("%d",&oper_type);
    
    printf("Enter the position:");
    scanf("%d",&pos);
    
    int result = bit_operations(num,oper_type,pos);
    
    printf("The result is: %d",result);
    
    return 0;
}