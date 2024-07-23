#include<stdio.h>

int main(){
    printf("Hello world");
    int number;
    int age = 22;
    int price;
    float pi = 3.14;
    char percentage = '%';

    printf("age is %d", age);
    printf("age is %f", pi);
    printf("age is %c", percentage);

    int a, b;
    printf("enter a \n");
    scanf("%d", &a);
    printf("enter b \n");
    scanf("%d", &b);

    printf("sum of a & b is : %d \n", a+ b);

    int side;

    scanf("%d", &side);
    scanf("%d", side * side);

    float radius;
    scanf("%f", &radius);
    printf("%f", 3.14 * radius * radius);

    return 0;
}