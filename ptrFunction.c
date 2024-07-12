#include<stdio.h>

void add(int, int);

int main(){
    void (*ptr_func)(int, int) = &add;
    ptr_func(10,20);
    return 0;
}

void add(int a, int b){
    printf("sum : %d\n", a+b);
}