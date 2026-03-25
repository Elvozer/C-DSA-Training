#include<stdio.h>
#include<stdbool.h>

void swap(int *A, int *B){
        int temp = *A;
        *A = *B;
        *B = temp;
    }

void sort_parity(int *A, int n){
    int *left = A;
    int *right  = A+n-1;
    while(left<right){
        bool con = true;
        if((*left%2)==0){
            left++;
            con=false;
        }
        if((*right%2)!=0){
            right--;
            con=false;
        }
        if(con){
            swap(left, right);
            left++;
            right--;
        }
    }
     for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}

void sort_parityAI(int *A, int n){
    int *left = A;
    int *right = A+n-1;
    while(left<right){
        while((*left%2)==0){
            left++;
        }
        while((*right%2)!=0){
            right--;
        }
        if(left<right){
            swap(left, right);
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}


int main(){
    int A[]={3, 1, 2, 4};
    sort_parityAI(A, 4);
    return 0;
}
