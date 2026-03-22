#include<stdio.h>

void find_target(int *A, int n, int tar){
    int *left = A;
    int *right = A+n-1;
    while(left<right){
        int current_sum = *(left) + *(right);
        if (current_sum>tar){
            right--;
        }
        else if (current_sum<tar){
            left++;
        }
        else{
            printf("Those values are %d and %d", *right, *left);
            break;
        }
    }
}
int main(){
    int A[]={1, 4, 6, 9, 16, 25};
    int size = sizeof(A)/sizeof(A[0]);
    find_target(A, size, 10);
    return 0;
}