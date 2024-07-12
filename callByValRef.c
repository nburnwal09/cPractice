#include<stdio.h>

void callByValue(int);
void callByRef(int*);

int main(){
    int age = 25;
    int *ptr=&age;
    ptr++;
    printf("%d\n", age);
    printf("%d\n", *ptr);
    ptr--;
    printf("%d\n", *ptr);
    // int num;
    // printf("%u\n", &num);
    // callByValue(num);

    // callByRef(&num);
}

// void callByValue(int num){
//     printf("%u\n", &num);
// }

// void callByRef(int *n){
//     printf("%u\n", n);
// }