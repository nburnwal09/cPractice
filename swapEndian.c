#include<stdio.h>
#include<stdint.h>

void swapEndian(int num, int* ans);

int main(){
    int n = 0x12345678;
    int nn = 0x78563412;
    int ans;
    int ans1;
    swapEndian(n,&ans);
    swapEndian(nn,&ans1);
    printf("Big Endian Little Endian: 0x%x\nLittle Endian to Big Endian: 0x%x\n", ans, ans1);
    return 0;
}
void swapEndian(int num, int* ans){
    int rightMost = (num & 0x000000FF) >> 0;
    int rightMiddle = (num & 0x0000FF00) >> 8;
    int leftMiddle = (num & 0x00FF0000) >> 16;
    int leftMost = (num & 0xFF000000) >> 24;

    rightMost = rightMost << 24;
    rightMiddle = rightMiddle << 16;
    leftMiddle = leftMiddle << 8;
    leftMost = leftMost << 0;

    (*ans) = rightMost | rightMiddle | leftMiddle | leftMost;

}