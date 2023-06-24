#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void convertToUpperCase(FILE *sourceFile, FILE *destinationFile){            //function to convert file content to upper case
    int ch;
    while((ch = fgetc(sourceFile)) != EOF){
        fputc(toupper(ch),destinationFile);
    }

}

void convertToLowerCase(FILE *sourceFile, FILE *destinationFile){        //function to convert file content to lower case
    int ch;
    while((ch = fgetc(sourceFile)) != EOF){
        ch = tolower(ch);
        fputc(ch,destinationFile);
    }

}

void convertToPurelyUpperCase(FILE *sourceFile, FILE *destinationFile){            //function to convert file content to purely upper case
    int ch;
    int previousCharacter = ' ';
    while((ch = fgetc(sourceFile)) != EOF){
        if(isalpha(ch) && !isalpha(previousCharacter)){
            fputc(toupper(ch),destinationFile);}
        else{
            fputc(ch, destinationFile);
        }
        previousCharacter = ch;
    }

}

int main(int argc, char* argv[]){
    if(argc < 3){
        printf("Enter input in the form of: %s [option] <source_file_name> <destination_file_name>\n",argv[0]);
        return 1;
    }

    char* option = NULL;               //declared a variable to store the option
    int sourceFileIndex = 1;
    int destinationFileIndex = 2;

    if(argc > 3){
        option = argv[1];
        sourceFileIndex = 2;
        destinationFileIndex = 3;
    }

    FILE* sourceFile = fopen(argv[sourceFileIndex], "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 1;
    }
    FILE* destinationFile = fopen(argv[destinationFileIndex], "w");
    if(destinationFile == NULL){
        printf("Error opening destination file\n");
        fclose(sourceFile);
        return 1;
    }
    
    if(option != NULL){
        if(strcmp(option, "-u") == 0){
            convertToUpperCase(sourceFile, destinationFile);
    }   
    else if(strcmp(option, "-l") == 0){
        convertToLowerCase(sourceFile, destinationFile);
    }   
    else if(strcmp(option, "-s") == 0){
        convertToPurelyUpperCase(sourceFile, destinationFile);
    }   
    else{
        printf("Invalid Option\n");
        fclose(sourceFile);
        fclose(destinationFile);
        return 1;
    }
    } 
    else {                                                    //if no options are passed this will perform normal copy
        int ch;
        while((ch = fgetc(sourceFile)) != EOF){
            fputc(ch, destinationFile);
    }
    }

    printf("File copied Successfully\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}