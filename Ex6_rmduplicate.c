#include<stdio.h>

int rm_duplicate(int *A, int n){
    int cou = 1;
    int *fir_ptr = A;
    int *sec_ptr = A+1;
    while(sec_ptr<A+n){
        if(*(sec_ptr)!=*(fir_ptr)){
            fir_ptr++;
            cou++;
            *(fir_ptr) = *(sec_ptr);
        }
        sec_ptr++;
    }
    return cou;
}

int main(){
    int A[] = {1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 5};
    int size = sizeof(A)/sizeof(A[0]);
    int bfsize = rm_duplicate(A, size);
    printf("%d\n", bfsize);
    for(int i=0; i<bfsize; i++){
        printf("%d ", A[i]);
    }
}