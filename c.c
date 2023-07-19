#include <stdio.h>
#include <string.h>

int gettFirstDayTheyear(int year){
    int day ; (year = 365 +((year-1)/4) - ((year-1)/100)+((year-1)/400)) % 7;
    return day;
};
int main(){
    char *month[] = {"Janurary", "February", "March", "April", "May", "June", "Julay", "Agust", "Septembor", "Novembor", "Decembor"};
    int DayinMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, totaldays, wekday = 0, SpceCounter = 0, year;

    printf("Enter You Fevorite Year\n");
    scanf("%d", &year);
    printf("\n\n************%d***************\n\n", year);

    //check if it is a leap Year
    if ((year % 4 ==0 && year % 100 != 0)){
           DayinMonth[1] = 29;
    };
    for(i = 0; i < 11; i++){
        printf("\n\n\n    ----------------%s----------------\n", month[i]);
        printf("\n    Sun - Mon - Tue - Wed - Thu - Fri - sat\n");
        for(SpceCounter = 1; SpceCounter <= wekday; SpceCounter++){
          printf("     ");  
        };
        totaldays = DayinMonth[i];
        for(j = 1; j <= totaldays; j++){
            printf("%6d", j);
            wekday++;
            if(wekday > 6){
                wekday = 0;
                printf("\n");
            };

        };
    };
    return 0;
}