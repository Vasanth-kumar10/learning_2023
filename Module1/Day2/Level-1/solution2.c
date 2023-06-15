#include<stdio.h>

void swap(void *a,void *b,size_t size){
    unsigned char* p = (unsigned char*)a;
    unsigned char* q = (unsigned char*)b;
    unsigned char temp;
    
    for(size_t i = 0; i < size; i++){
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

int main(){
    int a,b;
    double x,y;
    char ch1,ch2;
    
    printf("Enter the values of a and b to get swapped:");
    scanf("%d %d",&a,&b);
    
    printf("Enter the values of x and y to get swapped:");
    scanf("%lf %lf",&x,&y);
    
    
    printf("Enter the values of ch1 and ch2 to get swapped:");
    getchar();
    scanf("%c %c",&ch1,&ch2);
    
    
    printf("Before Swapping: a = %d, b = %d\n",a,b);
    swap(&a,&b,sizeof(int));
    printf("After Swapping: a = %d, b = %d\n",a,b);
    
  
    printf("Before Swapping: x = %lf, y = %lf\n",x,y);
    swap(&x,&y,sizeof(double));
    printf("After Swapping: x = %lf, y = %lf\n",x,y);
    
    
    printf("Before Swapping: ch1 = %c, ch2 = %c\n",ch1,ch2);
    swap(&ch1,&ch2,sizeof(char));
    printf("After Swapping: ch1 = %c, ch2 = %c\n",ch1,ch2);
    
    return 0;
}