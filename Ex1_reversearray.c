#include<stdio.h>

void reverse_array(int *arr, int size){
    int temp;
    for(int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main(){
    int A[] = {0, 1, 4, 6};
    int size = sizeof(A)/sizeof(*(A));
    reverse_array(A, size);
    for (int i=0; i<size; i++){
        printf("%d ", *(A+i));
    }
    return 0;
}
