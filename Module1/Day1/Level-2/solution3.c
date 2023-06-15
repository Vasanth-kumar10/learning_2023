#include<stdio.h>

int isVowel(char ch){
    
    switch(ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
            break;
        default:
            return 0;
            break;
     
    }
}

int main(){
    
    char ch;
    
    printf("Enter the character : ");
    
    scanf("%c",&ch);
    
    int result = isVowel(ch);
    
    if(result == 1){
        
        printf("Vowel\n");
        
    }
    else{
        printf("Not Vowel\n");
    }
    
}