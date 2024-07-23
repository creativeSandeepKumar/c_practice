#include<stdio.h>

int main() {
    for (int i = 0; i <= 100; i++)
    {
        printf("%d\n", i);
    }

    int i = 1;
    while( i <= 100){
        printf(" %d \n ",i);
        i++;
    }

    int i1 = 1;
    do {
        printf("%d\n", i1);
        i1++;
    } while(i1 <= 100);

    return 0;
    
}