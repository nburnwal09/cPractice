#include<stdio.h>
#include<stdlib.h>

void usingArray();
void usingPointers();

int main(){
    usingArray();
    printf("\n");
    usingPointers();
    return 0;
}

void usingPointers(){
    int* row1 = (int*)malloc(3*sizeof(int));
    int* row2 = (int*)malloc(2*sizeof(int));
    int* row3 = (int*)malloc(5*sizeof(int));
    int size[] = {3,2,5};
    int num = 100;
    int* ptr;
    ptr = row1;
    printf("\nROW1: \n");
    for(int i=0;i<3;i++){
        *ptr = num++;
        printf("%d  ", *ptr);
        ptr++;
    }
    printf("\n");

    ptr = row2;
    printf("\nROW2: \n");
    for(int i=0;i<2;i++){
        *ptr = num++;
        printf("%d  ", *ptr);
        ptr++;
    }
    printf("\n");

    ptr = row3;
    printf("\nROW3: \n");
    for(int i=0;i<5;i++){
        *ptr = num++;
        printf("%d  ", *ptr);
        ptr++;
    }
    printf("\n");
    int** arr = (int**)malloc(3*sizeof(int*));
    int** pptr;
    pptr = arr;
    *arr = row1;
    arr[0] = row1;
    arr[1] = row2;
    arr[2] = row3;
    printf("\n2D ARRAY: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<size[i];j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

void usingArray(){
    int row1[] = {1,2,3,4};
    int row2[] = {10,20};
    int row3[] = {100,200,300,400,500,600};
    int k = 3;
    int* jagged[] = {row1, row2, row3};
    int size[] = {4,2,6};
    
    for(int i=0;i<k;i++){
        int* ptr = jagged[i];
        for(int j=0;j<size[i];j++){
            printf("%d  ", ptr[j]);
        }
        printf("\n");
    }
}