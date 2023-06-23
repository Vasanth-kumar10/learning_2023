#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Student{
    int rollno;
    char name[25];
    float marks;
}Student;

void parseTheString(Student *students, char input[]){              //function to parse the input string 
    char* token = strtok(input, " ");
    students->rollno = atoi(token);
    token = strtok(NULL, " ");
    strcpy(students->name,token);
    token = strtok(NULL, " ");
    students->marks = atof(token);
}

void initializeMembers(Student *students, int numberOfStudents){        //function to initialize all the members in the above array of structures
    for(int i = 0; i < numberOfStudents; i++){
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;

    }
}


void displayMembers(Student *students, int numberOfStudents){       //function to display all members in the above array of structures
    for(int i = 0; i < numberOfStudents; i++){
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",students[i].rollno,students[i].name,students[i].marks);
    }
}

void sortArrayByMarks(Student *students, int numberOfStudents){            //function to sort the array of structures in the descending order based on marks 
    Student temp; 
    for(int i = 0; i < numberOfStudents-1; i++){
        for(int j = 0; j < numberOfStudents - i - 1; j++){
            if(students[j].marks < students[j+1].marks){
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

void searchArrayByName(Student *students, int numberOfStudents, char name[]){          //function to perform a search operation on the array of structures based on name of the student
    int found = 0;
    for(int i = 0; i < numberOfStudents; i++){
        if(strcmp(students[i].name,name) == 0){
            printf("Student found - Roll No: %d , Name : %s, Marks: %.2f\n",students[i].rollno,students[i].name,students[i].marks);
            found = 1;
        }
    }
    if(!found){
        printf("Student not found\n");
    }
}


int main(){

    int numberOfStudents;

    printf("Enter the number of Students:\n");
    scanf("%d",&numberOfStudents);
    getchar();

    Student* students = malloc(numberOfStudents * sizeof(Student));

    initializeMembers(students,numberOfStudents);                  //function call for members intialisation

    char inputString[100];

    for(int i = 0; i < numberOfStudents; i++){

    printf("Enter the Student details (rollno, name, marks) each seperated by a single space\n");

    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    parseTheString(&students[i],inputString);                     //function call to parse the input string
    }

    

    printf("\n ----- Display Members -----\n");

    displayMembers(students,numberOfStudents);                  //function call to display the members

    printf("\n ----- Sorted by Marks -----\n");

    sortArrayByMarks(students,numberOfStudents);              //function call to sort the array of structures based on marks

    displayMembers(students,numberOfStudents);               //function call to display the members of array of structures after sorting the array

    printf("\n ----- Search Student by name -----\n");


    char searchName[25];
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    searchArrayByName(students,numberOfStudents,searchName);           //function call to search the array of structures by name

    free(students);

    return 0;
}

