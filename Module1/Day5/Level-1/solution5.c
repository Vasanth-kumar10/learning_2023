#include<stdio.h>
#include<string.h>

typedef struct Student{
    char name[100];
    int age;
}Student;



void swappingStructFields(Student *ptr1, Student *ptr2){

    Student temp;

    temp = *ptr1;

    *ptr1 = *ptr2;

    *ptr2 = temp;

}
int main(){
    Student student1,student2;

    Student* ptr1;

    Student* ptr2;

    ptr1 = &student1;

    ptr2 = &student2;

    printf("Enter the data for student 1\n");

    printf("Enter the name of student 1:\n");

    fgets(ptr1->name,sizeof(ptr1->name),stdin);

    ptr1->name[strcspn(ptr1->name, "\n")] = '\0';

    printf("Enter the age of student 1:\n");

    scanf("%d",(&ptr1->age));
    
    getchar();

    printf("Enter the data for student 2\n");

    printf("Enter the name of student 2:\n");

    fgets(ptr2->name,sizeof(ptr2->name),stdin);

    ptr2->name[strcspn(ptr2->name, "\n")] = '\0';

    printf("Enter the age of student 2:\n");

    scanf("%d",(&ptr2->age));
    
    printf("--------------------------------------------------------------------------------------------\n");
    
    printf("Before Swapping the Structure fields\n");

    printf("The data in Student 1:\n %s\n %d\n",ptr1->name,ptr1->age);

    printf("The data in Student 2:\n %s\n %d\n",ptr2->name,ptr2->age);

    swappingStructFields(ptr1,ptr2);

    printf("--------------------------------------------------------------------------------------------\n");

    printf("After Swapping the Structure fields\n");

    printf("The data in Student 1:\n %s\n %d\n",ptr1->name,ptr1->age);

    printf("The data in Student 2:\n %s\n %d\n",ptr2->name,ptr2->age);

    return 0;
}