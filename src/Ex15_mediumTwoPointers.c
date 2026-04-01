#include<stdio.h>

int min(int a, int b){
    if(a<=b){
        return a;
    }
    else{
        return b;
    }
}

int maxArea(int* height, int heightSize){
    int *left = height;
    int *right = height + heightSize - 1;
    int result = (right - left) * min(*left, *right);
    
    while(left<right){
        int currentRes = (right - left) * min(*left, *right);
        if (currentRes > result){
            result = currentRes;
            }
        if (*left <= *right){
            left++;
        } 
        else{
            right--;
        }
    }

    return result;
}

int main(){
    int height[] = {1, 1};
    int size = sizeof(height)/sizeof(int);
    int result = maxArea(height, size);
    printf("%d\n", result);
    return 0;
}