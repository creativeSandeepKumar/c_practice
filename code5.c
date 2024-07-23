#include<stdio.h>

void printHello();

int calcSquare(int n);
int factorial(int m);

int main() {

    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("square is : %d", calcSquare(n));

    int m;
    printf("enter m : ");
    scanf("%d", &m);
    printf("square is : %d", factorial(m));


    printHello();
    return 0;
}


void printHello(){
    printf("hello world!\n");
}

int calcSquare(int n){ return n*n;};

int factorial(int n){
    if(n == 0){
        return 1;
    }

    int factnm1 = factorial(n-1);
    int factn = factnm1  * n;
    return factn;
}