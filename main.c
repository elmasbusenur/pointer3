#include <stdio.h>

int main() {
    int i;
    int *iptr;
    iptr=&i; //iptr i nin adresini tutuyor
    *iptr=8;// iptr i nin adresini gösteriyor. *iptr bu adresin içinde ne tutulduğunu gösteriuor.
    //aslında *&i gibi düşünebiliriz. i nin adresinin içindeki degeri işaret ediyor yani i yigösteriyor.
    printf("i değişkenin degeri %d\n",i); //8
    printf("iptr adresinin içeriği %d\n", *iptr);//8
    getchar();
    return 0;
}