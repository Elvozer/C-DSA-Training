#include<stdio.h>
#include<stdlib.h>

int return_len(char *A){
    int result = 0;
    while(*A!='\0'){
        result++;
        A++;
    }
    return result;
}


char *mergeAlternately(char *word1, char *word2){
    int size = return_len(word1)+return_len(word2);
    char *word3 = (char *)malloc((size+1)*sizeof(char));
    int i = 0, j = 0, k = 0;
    while(i<size){
        if (word1[j]!='\0'){
            word3[i++] = word1[j++];
        }
        if (word2[k]!='\0'){
            word3[i++] = word2[k++];
        }
    }
    *(word3+size) = '\0';
    return word3;
}

int main(){
    char  *word1 = "abcdefgc", *word2 = "p";
    char *res = mergeAlternately(word1, word2);
    printf("%s\n", res);
    free(res);
    return 0;
}