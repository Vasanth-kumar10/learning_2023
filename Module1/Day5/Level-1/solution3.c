#include<stdio.h>

typedef struct Time{
    int hours;
    int minutes;
    int seconds;
}Time;


void differenceBetweenTwoTimePeriods(Time startTime, Time endTime, Time *difference){

    if(endTime.seconds > startTime.seconds)
    {
        --startTime.minutes;

        startTime.seconds += 60;
    }

    difference->seconds = startTime.seconds - endTime.seconds;

    if(endTime.minutes > startTime.minutes)
    {
        --startTime.hours;

        startTime.minutes += 60;
    }

    (*difference).minutes = startTime.minutes - endTime.minutes;

    (*difference).hours = startTime.hours - endTime.hours;

    printf("The difference between the two time periods is %d:%d:%d\n",difference->hours,difference->minutes,difference->seconds);

}
int main(){

    Time startTime,endTime,difference;

    printf("Enter the Start Time\n");

    printf("Enter the time in the format of hours:minutes:seconds\n");

    scanf("%02d:%02d:%02d",&startTime.hours,&startTime.minutes,&startTime.seconds);

    printf("-----------------------------------------------------------------------------\n");

    printf("Enter the End Time\n");

    printf("Enter the time in the format of hours:minutes:seconds\n");

    scanf("%02d:%02d:%02d",&endTime.hours,&endTime.minutes,&endTime.seconds);

    differenceBetweenTwoTimePeriods(startTime,endTime,&difference);

    return 0;
}