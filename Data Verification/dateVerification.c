#include <stdio.h>

int date(int day, int month, int year){
    // Haha if statements go brr
    
    if(day<=0 || day>31 || month<=0 || month>12){
        return 1; // Invalid date
    } // This set the days within 1 and 31 and the months within 1 and 12
    
    if((month==4 || month==6 || month==9 || month==11) && day>30){
        return 1; // Invalid date
    } // There's no day 31 on April, June, September and November
    
    // Start of February and leap years
    if(month==2){
        int isLeapYear=0;
        // By default, the variable will be false (will not be a leap year)
        
        if((year%4==0 && year%100!=0) || (year%400==0)){
            isLeapYear=1; // Is a leap year
        }
        
        if(isLeapYear){
            // IF it is a leap year
            if(day>29){
                return 1; // Invalid date
            }
        }
        else{
            // IF it is NOT a leap year
            if(day>28){
                return 1; // Invalid date
            }
        }
        
    } // End of february and leap years
    
    return 0; // If it ran through all the previous verifications and didn't returned 1, the date is valid
}


int main() {
    int day, month, year;

    printf("Type a day\n");
    scanf("%d", &day);
    printf("Type a month\n");
    scanf("%d", &month);
    printf("Type a year\n");
    scanf("%d", &year);

    if(date(day, month, year)==0){
        printf("Valid date!");
    }
    else{
        printf("Invalid date!");
    }
    
    return 0;
}
/*
    This was my previous code on the February part, before I asked for help.
    
    if(month==2){
        if(year%100==0){
            if(day>29){
                return 1;
            }
        }
        else{
            if(year%4==0){
                if(day>29){
                    return 1;
                }
            }
            else{
                if(day>28){
                    return 1;
                }
            }
        }
        */
