//********************************************************
// lab_1_Joseph_Nunez.c
// Author: Joseph Nunez
// Date: 8/27/2024
// Class: COP 3223, Professor Parra
// Purpose: This program takes a user input 
// and outputs it to the terminal
// Input: Age, Height, and Grade
//
// Output: (to the command line) Age, Height, Grade
// //********************************************************
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(){
    int age; //inputs users age
    double height; //inout users height
    char grade; //inputs users grade

    //GATHERS USERS AGE
    printf("Enter your age: ");
    scanf(" %d", &age);

    //GATHERS USERS HEIGHT
    printf("Enter your height (i.e '5.1', '6.2'): ");
    scanf("%lf", &height);

    //GATHERS USERS GRADE
    printf("Enter your letter grade: ");
    scanf(" %c", &grade);
    grade = toupper(grade); //CHANGES USERS GRADE TO AN UPPERCASE LETTER

    //PRINTS THE ENTERED DATA
    printf("You entered - Age: %d, Height: %.2lf, Grade: %c\n", age, height, grade);
    return 0;
}