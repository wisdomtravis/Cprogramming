

// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
int main() {


//if else conditions

   int age;
   printf("Please enter your age:");
   scanf("%d", &age);
if(age >100){
    printf("invalid voter ");
} else if(age <0){
    printf("invalid");
} else if( age >=18) {
    printf("Kindly join the queue to vote");
} else{
    printf("sorry, you do not qualify to vote");
}

return 0;




// a program to check for negative, positive and 0 inputs
#include <stdio.h>

int main() {
    // Write C code here
    int number;
    printf("Please enter a number:");
    scanf("%d", &number);
    
    if (number<= -1){
        printf("the number entered is a negative number");
    } else if (number>=1){
        printf("the number entered is a positive number");
    } else if (number == 0){
        printf("the number entered is equals to zero");
    }
    return 0;
}

//write a program to determine, number of days, months, days, years
#include<stdio.h>

int main()
{
    int numberOfDays;
    int years;
    int months;
    int days;

    /* Reading number of days from user */
    printf("Enter number of days: ");
    scanf("%d", &numberOfDays);

    /* Calculating years */
    years = numberOfDays / 365;

    // Calculating months
    months = (numberOfDays - years *365) / 30;

    // Calculating days
    days = (numberOfDays - years * 365 - months*30);

    // Displaying results
    printf("Years = %d", years);
    printf("\nMonths = %d", months);
    printf("\nDays = %d", days);

    return 0;
}