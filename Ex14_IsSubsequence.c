#include<stdio.h>
#include<stdbool.h>
#include<string.h>


bool isSubsequence(char *s, char *t){
    int size_t = strlen(t), size_s = strlen(s);
    char *fir1 = s;
    char *fir2 = t;

    if(size_s == 0){
        return true;
    }
    while(fir2 < t+size_t){
        if(*(fir2) == *(fir1)){
            fir1++;
        }
        fir2++;
    }
    if(fir1 == s+size_s){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char *s = "a";
    char *t = "aaaaa";
    bool result = isSubsequence(s, t);
    printf("%s\n", result ? "true" : "false");
    return 0;
}