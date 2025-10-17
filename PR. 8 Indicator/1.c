#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("enter your string = ");
    gets(name);
    puts(name);

    printf("length = %d", strlen(name));
    return 0;
}