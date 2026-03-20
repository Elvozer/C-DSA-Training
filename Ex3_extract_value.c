#include<stdio.h>

char *extract_value(char *str){
    while(*str!='\0'){
        if (*str==':'){
            return (str+1);
        }
        str++;
    }
   return NULL;
}

int string_to_int(char *str){
    int result = 0;
    while(*str != '\0'){
        int num = *str - '0';
        result = result*10 + num;
        str++;
    }
    return result;
}

int main(){
    char *inf = "singal:35";
    char *result = extract_value(inf);
    printf("%s\n", result); 
    printf("%d\n", string_to_int(result));
    return 0;
}