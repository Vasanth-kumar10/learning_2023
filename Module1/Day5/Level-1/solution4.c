#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    char name[100];
    int age;
    char favouriteSport[100];
}student;


void storeDataOfStudents(student *ptr,int n){

    for(int i = 0; i < n; i++){

        printf("Enter the name of the student %d:\n",i+1);

        fgets(ptr[i].name,sizeof(ptr[i].name),stdin);

        ptr[i].name[strcspn(ptr[i].name, "\n")] = '\0';

        printf("Enter the age of the student:\n");

        scanf("%d",&ptr[i].age);

        getchar();

        printf("Enter the favourite sport of the student:\n");

        fgets(ptr[i].favouriteSport,sizeof(ptr[i].favouriteSport),stdin);

        ptr[i].favouriteSport[strcspn(ptr[i].favouriteSport, "\n")] = '\0';

    }

}

void showDataOfStudents(student *ptr,int n){
    for(int i = 0; i < n; i++){
        printf("Name of the student %d:\n",i+1);

        printf("%s\n",ptr[i].name);

        printf("Age of the student:\n");

        printf("%d\n",ptr[i].age);

        printf("Favourite sport of the student:\n");

        printf("%s\n",ptr[i].favouriteSport);
    }
}

int main(){
    int n;
    printf("Enter the number of students:\n");

    scanf("%d",&n);

    printf("----------------------------------------------------------\n");

    getchar();

    student* ptr = (student*) malloc(n * sizeof(student));

    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    storeDataOfStudents(ptr,n);

    printf("----------------------------------------------------------\n");

    printf("The entered details are:\n");

    showDataOfStudents(ptr,n);

    free(ptr);

    return 0;
}