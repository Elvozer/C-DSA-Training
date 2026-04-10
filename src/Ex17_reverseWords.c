#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

char *removeSpaces(char *s){
    int size = strlen(s);
    char *spac  = (char*)malloc(sizeof(char)*size);
    int count = 0;
    for (int i=0; i<size; i++){
        if (s[i] != ' '){
            spac[count++] = s[i];
        }
        else if (s[i] == ' ' && (i != 0 && s[i-1] != ' ' && i != size - 1)){
            spac[count++] = s[i];
        }
    }
    spac[count] = '\0';
    return spac;
}

char *reverseWords(char *s){
    char *fir1 = s;
    char *fir2 = s;
    bool con = true;
    int coun = 1;
    while(*fir1 != '\0'){
        if(*fir1 == ' '){
            coun++;
        }
        fir1++;
    }
    fir1 = s;
    for (int i=0; i<coun; i++){
    while(*fir2 != ' '){
        if(*fir2 == '\0'){
            con = false;
            break;
        }
        fir2++;
    }
    fir2--;
    while(fir1<fir2){
        char temp = *fir1;
        *fir1 = *fir2;
        *fir2 = temp;
        fir1++;
        fir2--;

    }
    while((*fir1 != ' ' || *fir2 != ' ') && con){
        if(*fir1 != ' '){
            fir1++;
        }
        else if(*fir2 != ' '){
            fir2++;
            }
        }
    if(con){
    fir1++;
    fir2++;
        }
    }
    int size = strlen(s), cou = size;
    char *res = (char*)malloc(size*sizeof(char));
    for(int i=0; i<size; i++){
        res[--cou] = s[i];
    }
    res[size] = '\0'; 
    return res;
}
int main(){
    char s[] = "  hello  World ";
    char *ree = removeSpaces(s);
    char *result = reverseWords(ree);
    int size = strlen(result);
    printf("%s\n", result);
    return 0;
}