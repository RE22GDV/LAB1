#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define grademax 5
#define Name "Mykola"
#define LastName "Ivanenko"
#define GroupName "GP-13"
#define Faculty "FFF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"
int main()
{
    printf("Dmitriy Gandzuk RE-22\n");
    unsigned int semestr;
    float admissionScore;
    int gradenumber = 1;
    int grade;
    int gradeall;
    double averageGrade;
    unsigned int age;
    printf("\n***************\n");
    printf("===============\n");
    printf("%s %s Enter following data.\n", Name, LastName);
    printf("Enter semestr:");
    scanf("%u", &semestr);
    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);
    do {
        printf("Enter grade #%d: ", gradenumber);
        scanf("%d", &grade);
        gradeall=gradeall+grade;
        gradenumber++;
    }
    while (gradenumber!=grademax+1);
    averageGrade = gradeall/gradenumber;
    /*printf("Enter grade #1: ");
    scanf("%d", &grade1);
    printf("Enter grade #2:");
    scanf("%d", &grade2);
    printf("Enter grade #3:");
    scanf("%d", &grade3);
    */
    printf("Enter your age: ");
    scanf("%u", &age);
    system("clear");
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n---------------------------");
    printf("\nstudent: %s %s", Name, LastName );
    printf("\nage: %u", age);
    printf("\nsemestr: %u", semestr);
    printf("\n---------------------------");
    printf("\nadmission score: %.1f", admissionScore);
    printf("\naverage grade = %.2f", averageGrade);
    printf("\n");
    return 0;
}