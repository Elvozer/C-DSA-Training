#include<stdio.h>

int find_max_value(int *A, int k, int n){
    int max_sum = 0;
    if (n<k){
        printf("Error");
        return -1;
    }
    for (int i=0; i<k; i++){
        max_sum = max_sum + *(A+i); 
    }
    int current_sum = max_sum;
    for (int i=k-1; i<n-1; i++){
        current_sum = current_sum - *(A+i-(k-1)) + *(A+i+1);
        if (current_sum > max_sum){
            max_sum = current_sum;
        }
    }
    return max_sum; 
}

int main(){
    int A[]={2, 5, 1, 8, 2, 9, 1};
    int size = sizeof(A)/sizeof(A[0]);
    printf("The maximun is %d \n", find_max_value(A, 3, size));
}