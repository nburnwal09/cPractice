// #include<stdio.h>

// const float pi = 3.14;

// int main(){
//     // int r = 3;
//     // float *ptrPi = &pi;
//     // printf("ptrPi = %p\n", ptrPi);
//     // printf("*ptrPi = %f\n", *&*ptrPi);

//     // printf("Area of circle = %f\n", pi*r*r);

//     // int const *ptr = &r;
//     // printf("ptr = %p\n", ptr);
//     // printf("*ptr = %d\n", *ptr);
//     // r=30;
//     // printf("ptr = %p\n", ptr);
//     // printf("*ptr = %d\n", *ptr);

//         // int rr = 5;
//         // *ptr=10; 
//         // ##### COMPILATION ERROR as ptr is pointer to a constant variable, hence the value of the address it points to cannot be changed through ptr
//         // but the same value can be changed through variable itself

//     //     r=10; //VALID

//     //     printf("\n*ptr = %d\n", *ptr);
//     // ptr = &rr;
//     // printf("ptr = %p\n", ptr);
//     // printf("*ptr = %d\n", *ptr);


//     int a = 15;
//     int *const cPtr = &a; // CONSTANT POINTER
//     printf("cPtr = %p  *cPtr = %d\n", cPtr, *cPtr);
//     a=10;
//     printf("cPtr = %p  *cPtr = %d\n", cPtr, *cPtr);
    
//     int b=100;
//     // cPtr = &b;  
//     // ###### NOT ALLOWED as cPtr is constant pointer. Hence cannot be pointed to different variavble's address
//     // printf("cPtr = %p  *cPtr = %d\n", cPtr, *cPtr);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

// driver code
int main()
{
    int* ptr;
    // creating a block
    {
        int a = 10;
        ptr = &a;
    }
    
    // sleep(100);
    // ptr here becomes dangling pointer
    // printf("%d\n", *ptr);
 
    char ch[5];
    int i=0;
    for(char c='a';c<'f';c++){
        printf("%c   ", c);
        ch[i++]=c;
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("\n ch[%d] = %c\n",i, ch[i]);
    }
    return 0;
}