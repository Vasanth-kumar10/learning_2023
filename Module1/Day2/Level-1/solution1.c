#include<stdio.h>

unsigned int getExponent(double num){
    unsigned long long bits = *((unsigned long long*)&num);
    unsigned int exponent = (bits >> 52) & 0x7FF;
    return exponent;
}

void printExponentHex(unsigned int exponent){
    printf("Exponent in Hexadecimal:0x%03X\n", exponent);
}

void printExponentBinary(unsigned int exponent){
    printf("Exponent in Binary:");
    for(int i = 10; i >=0; i--){
        int bit = (exponent >> i) & 1;
        printf("%d",bit);
    }
    printf("\n");
}

int main(){
    double x;
    printf("Enter the value:");;
    scanf("%lf",&x);
    unsigned int exponent = getExponent(x);
    
    printExponentHex(exponent);
    printExponentBinary(exponent);
    
    return 0;
}