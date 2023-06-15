#include<stdio.h>

int main()
{
    
    float Operand1,Operand2,result;
    char Operator;
    
    printf("Enter the Operand1:");
    
    scanf("%f",&Operand1);
    
    printf("Enter the Operator:");
    
    scanf(" %c",&Operator);
    
    printf("Enter the Operand2:");
    
    scanf("%f",&Operand2);
    
    switch (Operator) {
        
        case '+':                                                                                                            //addition operation
            result = Operand1+Operand2;
            printf("Result: %.2f\n",result);
            break;
            
        case '-':                                                                                                            //substraction operation
            result = Operand1-Operand2;
            printf("Result: %.2f\n",result);
            break;
            
        case '*':                                                                                                            //multiplication operation
            result = Operand1*Operand2;
            printf("Result: %.2f\n",result);
            break;
             
        case '/':                                                                                                             //division operation
            
            if(Operand2!=0){
              result = Operand1/Operand2;  
              printf("Result: %.2f\n",result);
            }
            else{
                printf("Error!,Division by zero\n");
            }
            break;
            
            default:                                                                                                   
                printf("Invalid Operator!");
                break;
            
            
    }
    
    
    return 0;
    
    
    
    
}
