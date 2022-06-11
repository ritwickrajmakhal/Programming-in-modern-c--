#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = {'H','E','L','L','O',' ','\0'};
    char str2[] = "WORLD";
    char str[20];
    strcpy(str,str1);
    strcat(str,str2);

    printf("%s\n",str);
    return 0;
}