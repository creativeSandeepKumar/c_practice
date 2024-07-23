#include<stdio.h>

void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);

int main() {
    int marks[3];
    printf("physics : ");
    scanf("%d", &marks[0]);
    
    printf("chem : ");
    scanf("%d", &marks[1]);

    printf("math : ");
    scanf("%d", &marks[2]);

    
    printf("physics = %d ", marks[0]);
    printf("chem = %d ", marks[1]);
    printf("math = %d \n", marks[2]);

    int age = 22;
    int *ptr = &age;


    int _age = 22;
    int *_ptr = &_age;

    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    ptr = ptr - _ptr;
    printf("%u\n", ptr);


    ptr = _age;
    printf("%u\n", ptr == _ptr);

    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    _printNumbers(arr, 6);

    return 0;
}

void printNumbers(int *arr, int n){
    for(int i = 0;  i < n; ++i){
        printf("%d : %d\n", i,  arr[i]);
    }
}

void _printNumbers(int arr[], int n){
    for(int i = 0;  i < n; ++i){
        printf("%d : %d\n", i,  arr[i]);
    }
}