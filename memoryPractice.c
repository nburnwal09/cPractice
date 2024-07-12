#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void displayArray(int *arr, int len);
void sortAsc(int *arr, int len);
void sortDesc(int *arr, int len);
void updateOdd(int *arr, int len);

int main(){
    int len;
    printf("Enter the length of array:  ");
    scanf("%d", &len);
    int *arr = (int *)malloc(len*sizeof(int));
    for(int i=0;i<len;i++){
        scanf("%d", &arr[i]);
    }
    // sortAsc(arr, len);
    // displayArray(arr, len);
    // sortDesc(arr, len);
    // displayArray(arr, len);
    updateOdd(arr, len);
    displayArray(arr, len);
    sortDesc(arr,len);
    displayArray(arr, len);
    sortAsc(arr, len);
    displayArray(arr, len);
    return 0;
}

void updateOdd(int *arr, int len){
    for(int i=0;i<len;i++){
        if(arr[i]&1){
            arr[i]=INT_MAX;
        }
    }
}

void sortDesc(int *arr, int len){
    for(int i=0;i<len-1;i++){
        int min = i;
        for(int j=i+1;j<len;j++){
            if(arr[j]>arr[min]){
                min=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    // free(arr);
    // displayArray(arr, len);
}

void sortAsc(int *arr, int len){
    for(int i=0;i<len-1;i++){
        int min = i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    // displayArray(arr, len);
    // sortDesc(arr, len);
    // displayArray(arr, len);
}

void displayArray(int *arr, int len){
    for(int i=0;i<len;i++){
        printf("%d  ", *(arr+i));
    }
    printf("\n");
}