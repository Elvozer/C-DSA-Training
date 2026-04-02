#include<stdio.h>

void qsort(int *nums, int size){
    for (int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(nums[i]>nums[j]){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}

int maxOperations(int* nums, int numsSize, int k){  
    int pair = 0;
    qsort(nums, numsSize);
    int *fir1 = nums, *fir2 = nums + numsSize - 1;
    while(fir1 < fir2){
        if(*fir1 + *fir2 == k){
            pair++;
            fir1++;
            fir2--;
        }
        else if(*fir1 + *fir2 > k){
            fir2--;
        }
        else if(*fir1 + *fir2 < k){
            fir1++;
        }
    }
    return pair;
}

int main(){
    int nums[] = {3, 1, 3, 4, 3}, k = 6;
    int result = maxOperations(nums, 5, k);
    printf("%d\n", result);
    qsort(nums, 5);
    for(int i=0; i<5; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}