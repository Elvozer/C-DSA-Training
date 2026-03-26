#include<stdio.h>
#include<stdbool.h>

int return_len(char *A){
    int result = 0;
    while(*A!='\0'){
        result++;
        A++;
    }
    return result;
}


char *mergeAlternately(char *word1, char *word2, char *word3, int size){
    int i = 0, j = 0;
    while(i<size){
        if (word1[j]!='\0'){
            word3[i++] = word1[j];
        }
        if (word2[j]!='\0'){
            word3[i++] = word2[j++];
        }
    }
    *(word3+size) = '\0';
    return word3;
}

int main(){
    char  *word1 = "abc", *word2 = "pqr";
    int size = return_len(word1)+return_len(word2);
    char word3[size];
    char *res = mergeAlternately(word1, word2, word3, size);
    printf("%s\n", res);
    return 0;
}