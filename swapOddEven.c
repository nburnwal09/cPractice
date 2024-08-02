#include<stdio.h>

int main(){
    unsigned int num;
    scanf("%d", &num);
    unsigned int x= num;
    for(int i=0;i<32;i=i+2){
        int i_bit = (x>>i)&1;
        int i_1bit = (x>>(i+1))&1;
        x = x - (i_bit << i) - (i_1bit << (i+1)) + (i_bit << (i+1))+ (i_1bit << i);
    }

    printf("After swapping odd and even bits: %u", x);
    return 0;
}