#include<stdio.h>
#include<stdlib.h>

int global;
int const total = 10;
int main(){
    static int five;
    int* ptr = (int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i] = i+2;
        // printf("%d\n", ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d   ", ptr[i]);
    }
    printf("\n");
    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("%d   ", ptr[i]);
    }
    printf("\n");

    return 0;
}