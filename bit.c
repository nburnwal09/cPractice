#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<stdint.h>

void setSpecificBit(int, int, int*);
void toggleSpecificBit(int, int, int*);
void unsetSpecificBit(int, int, int*);
void countBitFxn(int, int*);
void setMtoNBit(int, int, int, int, int*);
void toggleMtoNBit(int, int, int, int, int*);
void unsetMtoNBit(int, int, int, int, int*);
void reverseBitsFxn(uint32_t, uint32_t*);

void countSetBitsFxn(int, int, int*);
// void checkIsEven(int, bool*);
// void checkIsPowOf2(int, int*);

int main(){
    // printf("INT_MAX = %d\n", INT_MAX);
    // int num;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    // int k;
    // printf("Enter value of k: ");
    // scanf("%d", &k);

    // int setNum = 0;
    // setSpecificBit(num, k, &setNum);
    // int toggledNum = 0;
    // toggleSpecificBit(num, k, &toggledNum);
    // int unsetNum = 0;
    // unsetSpecificBit(num, k, &unsetNum);

    // printf("setNum = %d\n", setNum);
    // printf("toggledNum = %d\n", toggledNum);
    // printf("unsetNum = %d\n", unsetNum);

    // int countBits = 0;
    // countBitFxn(num, &countBits);
    // printf("Count of %d = %d\n", num, countBits);

    // int m, n;
    // printf("\nEnter values of m and n:\n");
    // scanf("%d", &m);
    // scanf("%d", &n);
    // int setMtoN = INT_MAX;
    // setMtoNBit(num, m, n, countBits, &setMtoN);
    // printf("%d after setting bits from %d to %d = %d\n", num, m, n, setMtoN);
    // int toggleMtoN = INT_MAX;
    // toggleMtoNBit(num, m, n, countBits, &toggleMtoN);
    // printf("%d after toggling bits from %d to %d = %d\n", num, m, n, toggleMtoN);
    // int unsetNtoM = INT_MAX;
    // unsetMtoNBit(num, m, n, countBits, &unsetNtoM);
    // printf("%d after doing unset bits from %d to %d = %d\n", num, m, n, unsetNtoM);

    uint32_t reverseBits = 0;
    uint32_t numm;
    printf("Enter the number: ");
    scanf("%u", &numm);
    reverseBitsFxn(numm, &reverseBits);
    printf("%d after reversing the bits = %d\n", numm, reverseBits);

    // int countSetBits = 0;
    // countSetBitsFxn(num, countBits, &countSetBits);
    // printf("count of set bits of %d = %d", num, countSetBits);

    // bool isEven;
    // checkIsEven(num, &isEven);
    // if(isEven == true){
    //     printf("%d is even\n", num);
    // }else{
    //     printf("%d is odd\n", num);
    // }

    // int countSetBit = 0;
    // checkIsPowOf2(num, &countSetBit);
    // if(countSetBit == 1){
    //     printf("%d is a power of 2\n", num);
    // }else{
    //     printf("%d is not a power of 2\n", num);
    // }

    
    return 0;
}

void countSetBitsFxn(int num, int count, int* ans){
    int ind = 1;
    while(num!=0 && ind<=count){
        if(num&1){
            (*ans)++;
        }
        num = num>>1;
    }
}

void reverseBitsFxn(uint32_t num, uint32_t* ans){
    for(int i=0;i<32;i++){
        (*ans) = (*ans)<<1;
        printf("ans = %u", (*ans));
        (*ans) = (*ans) | (num & 1);
        num = num>>1;
        printf("an = %u, num = %u\n", (*ans), num);
    }
}

void unsetMtoNBit(int num, int m, int n, int count, int* ans){
    if(m<1 || n<1){
        return;
    }
    int ind = m;
    if(m<=n || n<=count){
        while(ind<=n){
        num = num & ~(1<<(ind-1));
        ind++;
        }
    }
    (*ans) = num;
}

void toggleMtoNBit(int num, int m, int n, int count, int* ans){
    if(m<1 || n<1){
        return;
    }
    int ind = m;
    if(m<=n || n<=count){
        while(ind<=n){
        num = num ^ (1<<(ind-1));
        ind++;
        }
    }
    (*ans) = num;
}

void setMtoNBit(int num, int m, int n, int count, int* ans){
    if(m<1 || n<1){
        return;
    }
    int ind = m;
    if(m<=n || n<=count){
        while(ind<=n){
            num = num | (1<<(ind-1));
            ind++;
        }
    }
    (*ans) = num;
}

void countBitFxn(int num, int* count){
    while(num!=0){
        (*count)++;
        num = num>>1;
    }
}

void setSpecificBit(int num, int k, int* ans){
    (*ans) = num | (1<<(k-1));
}

void toggleSpecificBit(int num, int k, int* ans){
    (*ans) = num^(1<<(k-1));
}

void unsetSpecificBit(int num, int k, int* ans){
    (*ans) = num & ~(1<<(k-1));
}

void checkIsPowOf2(int num, int* countSetBit){
    while(num!=0){
        if(num&1){
            (*countSetBit)++;
        }
        num = num>>1;
    }
}

void checkIsEven(int num, bool* isEven){
    if(num&1){
        (*isEven) = false;
    }else{
        (*isEven) = true;
    }
}