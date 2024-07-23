#include<stdio.h>
#include<string.h>

 void checkChar(char str[], char ch);

int main(){
    char name[] = "Shradha Khapra";
    char course[] = {'a', 'p', 'n', 'a', '\0'};

    for(int i = 0; name[i] != '\0'; i++){
        printf("%c", name[i]);
    }
    printf("\n");

    for(char *ptr=name; *ptr != '\0'; ptr++){
        printf("%c", *ptr);
    }
    printf("\n");


    printf("%s\n", name);

    char firstName[40];
    printf("Enter your First Name: ");
    scanf("%s", firstName);
    printf("Enter your First Name is %s\n ", firstName);

    char fullName[40];
    printf("Enter your Full Name: ");
     scanf("%s", fullName);
    printf("Enter your full Name is %s\n ", fullName);

    // gets and puts
    char fullName1[40];
    printf("Enter your Full1 Name: ");
    fgets(fullName1, 40, stdin);
    puts(fullName);

    // library functions
    char name1[] = "Shradha";
    int length = strlen(name1);
    printf("The length of name : %d\n", length);

    char oldVal[] = "oldVal";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);

    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "Banana";
    printf("%d\n", strcmp(str1, str2));

    printf("enter string : ");
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }

    str[i] = '\0';
    puts(str);;

char str2[] = "ApnaCollege";
 char ch2 = 'x';
 checkChar(str2, ch2);


    return 0;
}

 void checkChar(char str[], char ch) {
 for(int i=0; str[i] != '\0'; i++) {
 if(str[i] == ch) {
 printf("character is present!");
 return;
 }
 }
 printf("character is NOT present:(");
 }

 // int countVowels(char str[]) {
 //     int count = 0;
 //     for(int i=0; str[i] != '\0'; i++) {
 //         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
 //            str[i] == 'o' || str[i] == 'u') {
 //                count++;
 //            }
 //     }
 //     return count;
 // }
 // void slice(char str[], int n, int m) { // n & m are valid value
 //     char newStr[100];
 //     int j = 0;
 //     for(int i=n; i<=m; i++, j++) {
 //         newStr[j] = str[i];
 //     }
 //     newStr[j] = '\0';
 //     puts(newStr);
 // }
 // void salting(char password[]) {
 //     char salt[] = "123";
 //     char newPass[200];
 //     strcpy(newPass, password); // newPass = "test"
 //     strcat(newPass, salt); // newPass = "test" + "123";
 //     puts(newPass)