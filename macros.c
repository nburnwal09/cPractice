#include<stdio.h>
#define AREA(a, b) (a*b)
#define SETBIT(num, k) (num | (1<<(k-1)))
#define TOGGLEBIT(num, k) (num ^ (1<<(k-1)))
#define UNSETBIT(num, k) (num & ~(1<<(k-1)))    

int main(){
    printf("Area of rectangle with side 5 and 4 cm = %dcm\n", AREA(5, 4));
    printf("number 15 after setting 2nd bit = %d\n", SETBIT(16, 2));
    printf("number 15 after toggling 2nd bit = %d\n", TOGGLEBIT(16, 5));
    printf("number 15 after unsetting 2nd bit = %d\n", UNSETBIT(16, 5));

    return 0;
}

// 01111