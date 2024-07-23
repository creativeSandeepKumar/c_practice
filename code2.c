#include<stdio.h>

int main(){
    int age = 22;
    int oldAge = age;
    int newAge = oldAge + 2;
    printf("new age is : %d", newAge);

    int rupee = 1, dollar;
    dollar = 74;


 /*
 order of declaration is important - Wrong Declaration Order
 float pi = 3.14;
 float area = pi * rad * rad;
 float rad = 3;
*/


int age1, age2, age3;
age1 = age2 = age3 = 22;

int d= 1, b = 2, c = 3;

d = b + c;

printf("%d \n", 3 % 2);
printf("%d \n", -3 % 2);

printf("sum of 2 & 3 : %d", 2 + 3);
printf("sum of 2 & 3 : %f", 2.0 + 3);
printf("sum of 2 & 3 : %f", 2.0 + 3.0);

printf(" Output : %d", 5+2/2*3);


printf("%d \n", 4 == 4);
printf("%d \n", 4 < 3);
printf("%d \n", 3 < 4);
printf("%d \n", 4 < 4);
printf("%d \n", 4 <= 4);


printf("%d \n", 4 > 3);
printf("%d \n", 3 > 4);
printf("%d \n", 4 < 4);
printf("%d \n", 4 >= 4);


printf("%d \n", 4 != 4);
printf("%d \n", 3 != 4);


printf("%d \n", 3 < 4 && 3 < 5);
printf("%d \n", 3 < 4 && 5 < 4);


printf("%d \n", 3 < 4 && 5 < 4);
printf("%d \n", 3 > 4 && 5 > 4);
printf("%d \n", 3 < 4 && 3 > 5);

printf("%d \n", !(3 < 4 && 5 < 4));
printf("%d \n", !(4 < 3 && 5 > 3));
// printf("%d \n", 3 < 4 && 3 > 5);

int a = 10;
a += 10;
printf("a+10 = %d \n", a);
a -= 10;
printf("a-10 = %d \n", a);
a *= 10;
printf("a*10 = %d \n", a);
a /= 10;
printf("a/10 = %d \n", a);
a %= 10;
printf("a%c10 = %d \n", '%', a);

    return 0;
}