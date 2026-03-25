#include<stdio.h>

void reverse_array_byptr(char *A, int size){
    char *firptr = A;
    char *secptr = A+size-1;
   while(firptr < secptr){
        char temp = *(firptr);
        *(firptr) = *(secptr);
        *(secptr) = temp;
        firptr++;
        secptr--;
   }

}
int main(){
    char A[]="olleh";
    reverse_array_byptr(A, (sizeof(A))-1);
    printf("%s\n", A);
    return 0;
}