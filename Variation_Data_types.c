//Variation and Data Types
#include <stdio.h>

int main(){
    char a ; //%s
    char name[] = {};// %s
    int age ; //%d
    float salary; //%f
    double budget; //%lf
    
    printf("Please enter a character: ");
    scanf("%c", &a);
    printf("This is a character %c \n ", a);
    
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your name is %s \n", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("This is an integer (age) \n", age);
    
    /*
    printf("Variables and Data Types: ");
    */
}
