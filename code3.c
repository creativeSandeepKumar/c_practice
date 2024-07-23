#include<stdio.h>

int main(){
    int age = 19;
    if(age >= 18){
        printf("You are an adult");
    } else {
        printf("You are not an adult");
    }

    int number;
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("even");
    } else {
        printf("odd");
    }

    int age1;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age1 < 12){
        printf("child");
    } else if(age < 18){
        printf("teenager");
    } else {
        printf("adult");
    }

    int age2;
    printf("Enter age : ");
    scanf("%d", &age);
    age > 18 ? printf("adult \n") : printf("not adult \n");

    int number1 = 7;
    int luckyNumber = 7;

    number1 == luckyNumber ? printf("You are lucky \n") : printf("you are not lucky \n");

    int day = 5;
    switch (day)
    {
    case 1: printf("Monday \n");
        break;
    case 2: printf("Tuesday \n");
        break;
    
    case 3: printf("Wednesday \n");
        break;
    case 4: printf("Thursday \n");
        break;
    
    case 5: printf("Friday \n");
        break;
    case 6: printf("Saturday \n");
        break;
    case 7: printf("Sunday \n");
        break;
    
    default:
        break;
    }

    char days = 'f';
    switch (days)
    {
    case 'm':
        printf("monday \n");
        break;
    case 't':
        printf("Tuesday \n");
        break;
    case 'w':
        printf("Wednesday \n");
        break;
    case 'T':
        printf("Thursday \n");
        break;
    case 'f':
        printf("Friday \n");
        break;
    case 's':
        printf("Saturday \n");
        break;
    case 'S':
        printf("Sunday \n");
        break;
    
    default:
        break;
    }

    return 0;
}