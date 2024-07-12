#include<stdio.h>

int main(){
    int age = 26;
    int _age=27;
    int *ptr= &age;
    int *_ptr=&_age;

    printf("%d  %d   _ptr-ptr=%d", _ptr, ptr, _ptr-ptr); // difference it actually 4 bytes, but pointers diff i.e. int address difference is 1
    // so printing 1 as difference;
    _ptr=&age;
    printf("\n compare = %d\n", ptr==_ptr);
    //_ptr is updated with &age so both are pointing to same _age memory address, hence comparison is 1 that means bpth are same
    return 0;
}