#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int divide(int, int);

int main(){
    printf("%d / %d = %d\n", INT_MIN, -1, divide(INT_MIN, -1));
    printf("%d / %d = %d\n", INT_MIN, 1, divide(INT_MIN, 1));
    printf("%d / %d = %d\n", INT_MAX, -1, divide(INT_MAX, -1));
    printf("%d / %d = %d\n", INT_MAX, 1, divide(INT_MAX, 1));
    printf("%d / %d = %d\n", 10, 3, divide(10, 3));

    
    return 0;
}

int divide(int dividend, int divisor) {
    if(dividend == INT_MIN && divisor==-1){
        return INT_MAX;
    }
    if(dividend == INT_MIN && divisor==1){
        return INT_MIN;
    }
    if(dividend == divisor){
        return 1;
    }
    int sign;
    if( (dividend<0 && divisor>0) || (dividend>0 && divisor<0)){
        sign = -1;
    }else{
        sign = 1;
    }
    int ans = 0;
    unsigned int n=abs(dividend);
    unsigned int d=abs(divisor);
    while(n>=d){
        int count = 0;
        while( n > (d<<(count+1)) ){
            count++;
        }
        n = n - (d<<count);
        ans = ans + (1<<count);
    }
    if(ans == (1<<32) && sign == -1){
        return INT_MAX;
    }
    return sign*ans;
}