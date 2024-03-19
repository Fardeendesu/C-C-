#include <stdio.h>

struct person {
    char name[50];
    int age;
};
    int main(){

        struct person person1;

        strcpy(person1.name,"john");
        person1.age =30;

        printf("Name:%s\n",person1.name);
        printf("Age: %d\n",person1.age);

        return 0;
    }