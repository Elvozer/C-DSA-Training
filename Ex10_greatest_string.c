#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int gcd(int a, int b){
    int rem = a%b;
    while(rem!=0){
        a = b;
        b = rem;
        rem = a%b;
    }
    return b;
}
char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int size = len1+len2;
    int size2 = gcd(len1, len2);
    char *str3 = (char*)malloc(sizeof(char)*(size+1));
    strcpy(str3, str1);
    strcat(str3, str2);
    char *str4 = (char*)malloc(sizeof(char)*(size+1));
    strcpy(str4, str2);
    strcat(str4, str1);
    if(strcmp(str3, str4) == 0){
        int i = 0;
        free(str3);
        while(i<size2){
            str4[i] = str1[i];
            i++;
        }
        str4[size2] = '\0';
        return str4;
    }
    else{
        free(str4);
        str3[0] = '\0';
        return str3;
    }
}

int main(){
    char *str1 = "AAAAA", *str2 = "AA";
    char *str3 = gcdOfStrings(str1, str2);
    printf("%s\n", str3);
    free(str3);
    return 0;
}