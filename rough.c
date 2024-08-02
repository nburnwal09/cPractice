#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

bool isPowOf2(int num){
    return (num && (!(num & (num-1))));
}

int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    returnSize=(int*)malloc((encodedSize+1)*sizeof(int));
    returnSize[0] = first;
    for(int i=0;i<encodedSize;i++){
        returnSize[i+1] = returnSize[i]^encoded[i];
    }
    return returnSize;
}

void printName(char str[]){
    printf("%s  ", str);
    // for(int i=0;str[i]!='\0';i++){
    //     printf("%c", str[i]);
    // }
}

void findUnique(int*, int, int*);

int main(){
    int n;
    printf("Enter size of elements: ");
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int uNum = 0;
    findUnique(arr, n, &uNum);
    printf("Non duplicate number is %d", uNum);
    // char* firstName = "Neha";
    // char* lastName = "Burnwal";
    // int fsize = strlen(firstName);
    // int lsize = strlen(lastName);

    // printName(firstName);
    // printName(lastName);
    // printf("\n");
    // char* name = (char*)malloc(100*sizeof(char));
    // fgets(name, 100, stdin);
    // puts(name);


    // int n = 10; 
    // int arr[n]; 
  
    // // Fill whole array with 100. 
    // memset(arr, 0, n*sizeof(arr[0])); 
    // printf("Array after memset()\n"); 
    // for (int i=0; i<n; i++) {
    //   printf("%d ", arr[i]); 
    // }

    
    // printf("%lu\n", sizeof(int*));
    // static int freq[26];
    // for(int i=0;i<26;i){
    //     freq[i] = 1;
    // }
    // for(int i=0;i<26;i++){
    //     printf("%d  ", freq[i]);
    // }
    // unsigned int* arr;
    // arr = (unsigned int *)malloc(100*sizeof(unsigned int));
    // if(arr == NULL){
    //     printf("memeory allocation failed");
    //     exit(0);
    // }
    // // memset(arr, 100, 10*sizeof(char));
    // for(int i=0;i<10;i++){
    //     printf("%u  ", arr[i]);
    // }
    // arr[2]=-8765;
    // printf("%u  ", arr[2]);


    // int* arr = (int*)malloc(5*sizeof(int));
    // for(int i=0;i<5;i++){
    //     arr[i]=i+10;
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d  ", arr[i]);
    // }
    // printf("\n");

    // arr = realloc(arr, 8*sizeof(int));
    // for(int i=0;i<8;i++){
    //     printf("%d  ", arr[i]);
    // }
    // printf("\n");

    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    // char name[] = "Neha Burnwal";
    // printf("%s\n", name);
    // name[2]='t';
    // printf("%s\n", name);

    // for(int i=0; str[i]!='\n';i++){
    //     printf("%c", str[i]);
    // }
    // char name[] = {'n','e', 'h', 'a', '\0'};
    // int lname = sizeof(name)/sizeof(char);
    // char* str = "Neha\0\0";
    // int l = strlen(str);
    // printf("lname = %d\nln=%d\n", lname, l);
    // for (int i = 0; i < sizeof(str); i++) {
    //     if (str[i] == '\0') {
    //         printf("\\0"); // Print \0 explicitly for readability
    //     } else {
    //         printf("%c", str[i]);
    //     }
    // }


    // int e[] = {1,2,3};
    // int encodedSize = sizeof(e)/sizeof(e[0]);
    // int first = 1;
    // int *returnSize = decode(e, encodedSize, first, returnSize);
    // for(int i=0;i<encodedSize+1;i++){
    //     printf("%d  ", returnSize[i]);
    // }
    // printf("\n");
    // free(returnSize);
    // char c;
    // c= getchar();
    // if(c>='0' && c<='9'){
    //     printf("Integer\n");
    // }else{
    //     printf("character\n");
    // }

    // int n,k;
    // printf("Enter the number then enter value of K\n");
    // scanf("%d", &n);
    // // Find position of the only set bit
    // // METHOD 2
    // printf("isPowerOf2: %d\n", isPowOf2(n));
    // if(isPowOf2(n)){
    //     int i=0;
    //     while(n>0){
    //         if(n&1){
    //             printf("Position of the Only set bit is %d\n", i+1);
    //             exit(0);
    //         }
    //         i++;
    //         n=n>>1;
    //     }
    // }else{
    //     printf("\nMany set bits");
    // }


    // METHOD 1
    // float res = log2(n);
    // if((res - (int)res)==0){
    //     printf("\n result = %d\n", (int)res+1);
    // }else{
    //     printf("\n result = %d\n", -1);
    // }

    // Find number after setting kth bit
    // scanf("%d", &k);
    // int res = n | (1<<k);
    // printf("result after setting kth bit = %d\n", res);



    // Find position of kth set bit
    // int count = 0;
    // int i = 0;
    // while(n > 0){
    //     if(n & 1){
    //         count++;
    //         if(count == k){
    //             printf("position of kth set bit is %d\n", i);
    //             exit(0);
    //         }
    //     }
    //     i++;
    //     n=n>>1;
    // }
    // printf("Kth set bit not present\n");
    return 0;
}

void findUnique(int* arr, int n, int* ans){
    int num = arr[0];
    for(int i=1;i<n;i++){
        num = num^arr[i];
    }

    (*ans) = num;
}