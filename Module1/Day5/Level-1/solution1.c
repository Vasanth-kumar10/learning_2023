#include<stdio.h>

typedef struct Box{
    float length;
    float width;
    float height;
}Box;


float calculateVolume(Box *ptr){

    return (*ptr).length * (*ptr).width * (*ptr).height;           //Accessed members with the help of (*) asterisk or indirection operator and (.) dot operator

}

float calculateTotalSurfaceArea(Box *ptr){

    return 2 * (ptr->length * ptr->width + ptr->length * ptr->height + ptr->width * ptr->height); //With the help of (->) Arrow operator using pointer as well as dot representation

}

int main(){

    Box Box1;

    Box* ptr = &Box1;

    printf("Enter the length of the Box:");

    scanf("%f",&Box1.length);

    printf("Enter the width of the Box:");

    scanf("%f",&Box1.width);

    printf("Enter the height of the Box:");

    scanf("%f",&Box1.height);

    float volume = calculateVolume(ptr);

    float totalSurfaceArea = calculateTotalSurfaceArea(ptr);

    printf("The Volume of the box is : %.2f\n",volume);

    printf("The Total surface area of the box is : %.2f\n",totalSurfaceArea);

    return 0;
}