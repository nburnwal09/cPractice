#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverseStr(char**);

int main(){
    int count[2000+1]={1};
    for(int i=0;i<2001;i++){
        printf("%d  ", count[i]);
    }
char str[100] = "Learningisfun"; 
    char *first, *second; 
    first = str; 
    second = str; 
    // printf("Original string :%s\n ", str); 
      
    // when overlap happens then it just ignore it 
    memcpy(first + 8, first, 10); 
    // printf("memcpy overlap : %s\n ", str); 
  
    // when overlap it start from first position 
    memmove(second + 8, first, 25); 
    // printf("memmove overlap : %s\n ", str); 
  
    // char str[] = "Hello, world!";

    // // Using memmove to handle overlapping regions
    // memcpy(str + 7, str, 5); // Overlapping regions, moves "Hello" to start at 'w'
    // str[12] = '\0'; // Null terminate the result

    // printf("str: %s\n", str);
    // char* str1 = (char*)malloc(500*sizeof(char));
    // char* str2 = (char*)malloc(100*sizeof(char));

    // char str1[100]= "Neha";
    // char str2[50] = "Chhoti";
    // memcpy(str1, str2, sizeof(str2));

    // printf("%s\n", str1);
    // if(str1==NULL || str2==NULL){
    //     printf("Momory allocation failed");
    //     exit(0);
    // }
    // printf("Enter first string: ");
    // fgets(str1, 200*sizeof(char), stdin);
    // str1[strcspn(str1, "\n")] = '\0';
    // printf("Enter second string: ");
    // fgets(str2, 200*sizeof(char), stdin);
    // str2[strcspn(str2, "\n")] = '\0';

    // strcat(str1, str2);
    // puts(str1);

    // reverseStr(&str1);
    // puts(str1);

    // char s1[100] = "neha";
    // char s2[50] = "burnwal";
    
    // strcat(s1, s2); 
    // printf("\n%s\n", s1);
    // printf("\n len s1 = %lu\n", strlen(s1));
    // free(str1);
    // free(str2);
    return 0;
}

void reverseStr(char** str){
    int i=0;
    int j = strlen(*str)-1;
    while(i<j){
        char temp = (*str)[i];
        (*str)[i] = (*str)[j];
        (*str)[j] = temp;
        i++;
        j--;
    }
}