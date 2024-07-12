#include<stdio.h>

int main(){
    int n, d;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("Enter digits to rotate by: \n");
    scanf("%d", &d);

    int lRotation = ((n<<d) | (n>>(16-d))) & 65535;
    int rRotation = ((n>>d) | (n<<(16-d))) & 65535;

    printf("\n lrotation = %d \n rRotation = %d\n", lRotation, rRotation);
    return 0;
}