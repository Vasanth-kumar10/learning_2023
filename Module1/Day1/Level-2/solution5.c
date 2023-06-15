#include<stdio.h>

int typeOfCharacter(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return 1;
    }
    else if(ch >= 'a' && ch <= 'z'){
        return 2;
    }
    else if(ch >= '0' && ch <= '9'){
        return 3;
    }
    else if(ch >= 32 && ch <= 126){
        return 4;
    }
    else{
        return 5;
    }
}

int main(){
    char ch;
    
    printf("Enter the character to be checked: ");
    scanf("%c",&ch);
    int result = typeOfCharacter(ch);
    
    printf("%d",result);
}