#include <stdio.h>

int main() {
    int length;
    printf("Enter the length of your name:");
    scanf("%d",&length);
    char UserInput[length];
    printf("Enter the name: ");
    scanf("%99[^\n]",UserInput);
    printf("Inputted:%s\n ",UserInput);
    return 0;
}