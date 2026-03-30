#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char *reverseVowels(char *s){
    char vowels[] = "aueoiAUIEO";
    int size1 = strlen(s);
    int size2 = strlen(vowels);
    char *left = s, *right = s+size1-1;
    while(left<right){
        bool c1 = false, c2 = false;
        int i=0;
        while(i<size2){
            if(*(left) == vowels[i]){
                c1 = true;
                break;
            }
            else{
                i++;
            }
        }
        i = 0;
        while(i<size2){
            if(*(right) == vowels[i]){
                c2 = true;
                break;
            }
            else{
                i++;
            }
        }
        if(c1 && c2){
            char temp = *(left);
            *(left) = *(right);
            *(right) = temp;
            left++;
            right--;
        }
        else if(c1){
            right--;
        }
        else if(c2){
            left++;
        }
        else{
            left++;
            right--;
        }
    }
    return s;
}
