#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies) {
    bool *retur = (bool*)malloc(sizeof(bool)*(candiesSize+1));
    int i = 0;
    int max = *(candies);
    while(i<candiesSize){
        if(*(candies+i)>max){
            max = *(candies+i);
        }
        *(candies+i) = *(candies+i) + extraCandies;
        i++;
    }
    i = 0;
    while(i<candiesSize){
        if(*(candies+i)>=max){
            *(retur+i) = true;
        }
        else{
            *(retur+i) = false;
        }
        i++;
    }
    return retur;
}

int main(){
    int candies[] = {2,3,5,1,3}, extraCandies = 3;
    int size = sizeof(candies)/sizeof(candies[0]);
    bool *res = kidsWithCandies(candies, size, extraCandies);
    for (int i=0; i<size; i++){
        printf("%s ", *(res+i) ? "true" : "false");
    }
    free(res);
    return 0;
}