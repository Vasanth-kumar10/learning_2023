#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned long calculateTotalSeconds(const char *timeString){
    char strCopy[9];                                  //copy of timeString array is made to make the timeString array remain original
    strcpy(strCopy,timeString);
    char *token;
    unsigned long hours,minutes,seconds;
    
    token = strtok(strCopy, ":");                    //strtok used to spilt a string into a series of tokens based on delimiter
    hours = strtoul(token, NULL, 10);               /*strtoul is used to convert a string representation of an unsigned 
                                                    long integer to its numeric value*/
    token = strtok(NULL, ":");                      
    minutes = strtoul(token, NULL, 10);
    
    token = strtok(strCopy, ":");
    seconds = strtoul(token, NULL, 10);
    
    
    return hours * 3600 + minutes * 60 + seconds;
}

int main(){
    char timeString[9];
    
    printf("Enter the time in the format of 'hh:mm:ss': ");
    fgets(timeString, sizeof(timeString), stdin);
    timeString[strcspn(timeString, "\n")] = '\0';
    
    unsigned long totalSeconds = calculateTotalSeconds(timeString);
    
    printf("Total Seconds in the given string format is: %lu\n", totalSeconds);
    
    return 0;
}