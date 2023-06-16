#include<stdio.h>

void printBits(unsigned int num){
    unsigned int mask = 1 << 31;        //initially setting mask to the leftmost bit
    
    for(int i = 0; i < 32; i++){
        if(num & mask){                 //performs bit wise AND operation between input and mask
            printf("1");
        }
        else{
            printf("0");
        }
        mask >>= 1;                    //mask is shifted to right by one position to move into next bit position
    }
    printf("\n");
}

int main(){
    unsigned int num;
    printf("Enter a integer of size 32bit:");
    scanf("%u",&num);
    
    printf("The bits of the integer %d are:",num);
    printBits(num);
    return 0;
}