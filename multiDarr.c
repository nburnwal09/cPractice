#include<stdio.h>

int main(){
    int *p;
    int (*ptr)[10];

    int arr[] = {1,2,3,4,5};
    p=arr;
    ptr=&arr;

    printf("p = %p\n", p);
    printf("ptr = %p\n\n", ptr);
    printf("*p = %d dereferenced p i.e. get the value of 1st element\n", *p);
    printf("**ptr = %d as *p refernce to the base address of the array it points to, again dereferencing gives base address element value\n\n", **ptr);

    printf("p = %p as it is the size of the base address of array, ptr = %p as it the address of the whole array\n", p, ptr);
    printf("*p = %d, *ptr = %p\n\n", *p, *ptr);

    printf("sizeof(p) = %lu, sizeof(*p) = %d\n", sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n", sizeof(ptr), sizeof(*ptr));

    return 0;
}