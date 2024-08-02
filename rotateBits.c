#include<stdio.h>
#define INT_BITS 16

int main(){
    int n;
    int d;
    printf("Enter a number and enter digits to rotate by:: \n");
    scanf("%d%d", &n, &d);
    // printf("Enter digits to rotate by: \n");
    // scanf("%d", &d);
    // METHOD 2
    unsigned short lRotation = (n<<d) | (n>>(INT_BITS-d));
    unsigned short rRotation = (n>>d) | (n<<(INT_BITS-d));

    // METHOD 1
    // int lRotation = ((n<<d) | (n>>(16-d))) & 65535;
    // int rRotation = ((n>>d) | (n<<(16-d))) & 65535;

    printf("\n lrotation = %u \n rRotation = %u\n", lRotation, rRotation);
    return 0;
}