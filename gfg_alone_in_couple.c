#include<stdio.h>

int findOddOccurenceElement(int arr[], int len);

int main(){
    int arr[]={23,43,56,56,43,57,32,23,32};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("number with odd occurence is %d", findOddOccurenceElement(arr, len));
}

int findOddOccurenceElement(int arr[], int len){
    int res = 0;
    for(int i=0;i<len;i++){
        res=res^arr[i];
    }
    return res;
}