#include <stdio.h>
#include <ctype.h>

int main () {
    int record, partsProduced, totalParts, i, payment, totalPayment, male, maleAverage, female, femaleAverage, higherPayment, employee;
    char sex;

    i = 1;
    higherPayment = 0;
    totalPayment = 0;

    printf("Piece Rate Pay!");
    printf("\nWe will ask the values of 5 employees, please answer properly.");
    printf("\n\n---------------------------------------------------------------------------\n");

    while(i <= 5) {

        printf("\n\nEmployee %i", i);

        printf("\nEnter the Record Number: ");
        scanf("%i", &record);

        while (sex != 'M' && sex != 'F') {
            fflush(stdin);
            sex = 'A';
            printf("\nEnter the Sex: ");
            scanf("%c", &sex);
            sex = toupper(sex);

            if (sex != 'M' && sex != 'F'){
                printf("\nThe value is invalid. Please, use only M for Male and F for Female.\n");
            }
        }

        printf("\n\nEnter the Produced Parts: ");
        scanf("%i", &partsProduced);

        if (partsProduced <= 30) {
            payment = 1500;
        } else if (partsProduced > 30 && partsProduced <= 35) {
            payment = 1500 + (1500 * 0.03) * (partsProduced - 30);
        } else if (partsProduced > 35) {
            payment = 1500 + (1500 * 0.05) * (partsProduced - 35);
        }

        totalPayment = totalPayment + payment;

        if(payment > higherPayment) {
            higherPayment = payment;
            employee = record;
        }

        totalParts = partsProduced + totalParts;

        if(sex == 'M') {
            maleAverage = partsProduced + maleAverage;
            male++;
        } else if (sex == 'F') {
            femaleAverage = partsProduced + maleAverage;
            female++;
        }

        printf("\n\nThe employee of Record %i received %i payment", record, payment);

        i++;

        printf("\n\n-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -\n\n");
    }

    if (male != 0) {
        maleAverage = maleAverage / male;
    }

    if (female != 0) {
        femaleAverage = femaleAverage / female;
    }

    printf("\n\n\n\n FINAL RESULTS:");
    printf("\n\nThe total Payroll of the factory is: %i", totalPayment);
    printf("\n\nThe total number of Parts Produced is: %i", totalParts);
    printf("\n\nThe Male Average of Parts Produced is: %i", maleAverage);
    printf("\nThe Female Average of Parts Produced is: %i", femaleAverage);
    printf("\n\nThe Employee with the highest payment is the %i employee, with a payment of %i dollars!", employee, higherPayment);

}
