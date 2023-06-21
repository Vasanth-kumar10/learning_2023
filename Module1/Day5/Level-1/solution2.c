#include<stdio.h>

typedef struct ComplexNumbers{
    float real;
    float imaginary;
}ComplexNumbers;

void readComplexNumber(ComplexNumbers *number){

    printf("Enter the real part:");

    scanf("%f",&number->real);

    printf("Enter the imaginary part:");

    scanf("%f",&number->imaginary);
}

void writeComplexNumber(const ComplexNumbers *number){

    printf("%.1f + %.1fi\n",number->real,number->imaginary);

}

ComplexNumbers addComplexNumber(const ComplexNumbers *number,const ComplexNumbers *number1,ComplexNumbers *add_result){

    (*add_result).real= number->real+number1->real;

    (*add_result).imaginary= number->imaginary+number1->imaginary;

    return *add_result;

}

ComplexNumbers multiplyComplexNumber(const ComplexNumbers *number,const ComplexNumbers *number1,ComplexNumbers *mul_result){

    mul_result->real= number->real*number1->real - number->imaginary*number1->imaginary;

    mul_result->imaginary= number->real*number1->imaginary + number1->real*number->imaginary;

    return *mul_result;

}

int main(){
    ComplexNumbers number1,number2,add_result,multiply_result;

    printf("Enter the first number\n");

    readComplexNumber(&number1);

    printf("Enter the second number\n");

    readComplexNumber(&number2);

    addComplexNumber(&number1,&number2,&add_result);

    printf("The Addition of two complex numbers is\n");

    writeComplexNumber(&add_result);

    printf("The Multiplication of two complex numbers is\n");

    multiplyComplexNumber(&number1,&number2,&add_result);

    writeComplexNumber(&add_result);




return 0;
}