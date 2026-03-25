#include<stdio.h>

void move_zeroes(int *A, int n){
    int *fir = A;
    int *sec = A;
    while(sec<A+n){
    if(*sec!=0){
        *fir = *sec;
        fir++;
        }
    sec++;
    }
    while (fir < A + n) {
    *fir = 0;
    fir++;
        }
    for (int i=0; i<n; i++){
        printf("%d ", A[i]);
        }
    }

int main(){
    int A[]={1, 2, 0, 3, 12};
    int size = sizeof(A)/sizeof(A[0]);
    move_zeroes(A, size);
    return 0;
}