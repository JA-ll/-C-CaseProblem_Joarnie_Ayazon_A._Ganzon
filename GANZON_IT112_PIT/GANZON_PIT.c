#include <stdio.h>

int main() {
    int grade, valid;

    printf("\nName: Joarnie Ayazon A. Ganzon");
    printf("\nID Number: 2025303549");

    printf("\n-------------------------------------\n");

    printf("\nEnter your grade (0-100): ");
    valid = scanf("%d", &grade);

    printf("\n-------------------------------------\n");

    if (valid != 1) {
        printf(" Invalid input! Please enter 0 - 100.\n");
    }else if (grade < 0 || grade > 100) {
        printf(" Invalid input! Please enter 0 - 100.\n");
    } 
    else if (grade >= 90 && grade <= 100) {
        printf(" Descriptive Rating : Outstanding\n");
        printf(" Remarks            : PASSED ✅\n");
    } 
    else if (grade >= 85 && grade <= 89) {
        printf(" Descriptive Rating : Very Satisfactory\n");
        printf(" Remarks            : PASSED ✅\n");
    } 
    else if (grade >= 80 && grade <= 84) {
        printf(" Descriptive Rating : Satisfactory\n");
        printf(" Remarks            : PASSED ✅\n");
    } 
    else if (grade >= 75 && grade <= 79) {
        printf(" Descriptive Rating : Fairly Satisfactory\n");
        printf(" Remarks            : PASSED ✅\n");
    } 
    else {
        printf(" Descriptive Rating : Did Not Meet Expectations\n");
        printf(" Remarks            : FAILED ❌\n");
    }

    printf("-------------------------------------\n");
    printf("        Thank you for using this!\n");
    printf("=====================================\n");

    return 0;
}
