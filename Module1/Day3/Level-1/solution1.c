#include<stdio.h>

void printAscending(int n){                                                                    //this loop will print numbers in ascending order
    for(int i = 1; i <= n; i++){
        printf("%d",i);
    }
}

void printSpaces(int n){                                                                          //this loop will print the spaces in the pattern
    for(int i = 1; i <=n; i++){
        printf(" ");
    }
}

void printDescending(int n){                                                                  //this loop will print numbers in descending order
    for(int i = n; i >=1; i--){
        
        printf("%d",i);
    }
    
   
}

int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i = n; i >= 1; i--){                                                                    //this loop prints the each line of the pattern in the given format  
    printAscending(i);
    printSpaces((n-i)*2);
    printDescending(i);
    printf("\n");
    }
    return 0;
}