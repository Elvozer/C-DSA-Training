#include<stdio.h>
#include<stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int *left = flowerbed;
    while(left < flowerbed+flowerbedSize && n>0){
        if (*(left) == 0){
          bool lookleft = (left == flowerbed) || (*(left-1) == 0);
          bool lookright = (left == flowerbed+flowerbedSize-1) || (*(left+1) == 0);
          if(lookleft && lookright){
            *(left) = 1;
            n = n - 1;
          }
        }
        left++;
    }
    return n==0;
}

int main(){
    int flowerbed[] = {1,0,0,0,1}, n = 1;
    int size = sizeof(flowerbed)/sizeof(flowerbed[0]);
    bool result = canPlaceFlowers(flowerbed, size, n);
    printf("%s\n", result ? "true" : "false");
    return 0;
}