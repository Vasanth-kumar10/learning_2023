#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct LogData{
    int entryNumber;
    char sensorNumber[30];
    float temperature;
    int humidity;
    int light;
    char timeStamp[30];
}LogData;

int extractLogEntries(LogData *logEntries){                    //function to extract each line in the .csv file and store it in an array of structures
    FILE* sourceFile = fopen("data.csv", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }
    char line[100];
    int numberOfEntries = 0;
    while(fgets(line, sizeof(line), sourceFile)){
        if(strstr(line,"entryNumber") != NULL)
            continue;
        
    LogData* entry  = logEntries + numberOfEntries;

        int result = sscanf(line, "%d, %29[^,], %f, %d, %d, %29s",&entry->entryNumber, entry->sensorNumber, &entry->temperature, &entry->humidity, &entry->light, entry->timeStamp);
        if(result == 6){
            numberOfEntries++;
        }
        
    }
    fclose(sourceFile);
    return numberOfEntries;
}

void displayLogEntries(const LogData *logEntries, int numberOfEntries){               //function to display the contents of the array of structures
    printf("%-12s %-13s %-12s %-9s %-6s %-s\n", "entryNumber", "sensorNumber", "temperature", "humidity", "light", "timeStamp");
    for(int i = 0; i < numberOfEntries; i++){
        const LogData* entry = logEntries + i;
        printf("%-12d %-13s %-12.2f %-9d %-6d %s\n", entry->entryNumber, entry->sensorNumber, entry->temperature, entry->humidity, entry->light, entry->timeStamp);

        
    }
}



int main() {
    LogData logEntries[100];
    LogData* logEntriesPtr = logEntries;

    int numberOfEntries = extractLogEntries(logEntriesPtr);
    printf("--------------------Data log is given below-----------------------\n");
    displayLogEntries(logEntriesPtr, numberOfEntries);
    return 0;
}
        

    