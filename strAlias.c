#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

typedef struct LibraryDetails{
    int noOfBooks;
    char cat[100];
} ld;

int main(){
    struct LibraryDetails ld1 = {1000, "fictional"};
    printf("Details:  number of books = %d\n Category = \"%s\"\n", ld1.noOfBooks, ld1.cat);

    ld ld2 = {2000, "rom-com"};
    printf("\nDetails:  number of books = %d\n Category = \"%s\"\n", ld2.noOfBooks, ld2.cat);

    char s[] = "Neha Burnwal09";
    int len=strlen(s);
    printf("%s\n", s);
    printf("len(s) = %d\n", len);
    char str[len];
    int k=0;
    for(char *cptr=s; *cptr; cptr++){
        *cptr = tolower(*cptr);
        if(*cptr >='a' && *cptr <='z'){
            str[k]=*cptr;
            k++;
        }
    }
    printf("%s\n", str);
    printf("len(str) = %d\n", k);
    printf("strlen(str) = %d", strlen(str));


    return 0;
}