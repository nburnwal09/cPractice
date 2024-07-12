#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    int roll;
    char name[100];
};

int main(){
    // struct Student *s1 = malloc(sizeof(struct Student));
    // s1->roll = 10;
    // // s1->name = "Neha";
    // strcpy(s1->name, "Neha");

    // printf("roll = %d\n", s1->roll);
    // printf("name = %s\n", s1->name);
    
    struct Student s1;
    struct Student *ptr = &s1;
    if (ptr == NULL) {
        perror("Unable to allocate memory");
        return 1;
    }
    s1.roll = 10;
    strcpy(s1.name, "Neha");

    printf("roll = %d\n", (*ptr).roll);
    printf("name = %s\n", (*ptr).name);
    return 0;
}