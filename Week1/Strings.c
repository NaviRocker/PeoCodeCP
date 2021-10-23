/* 
Author - Namadee Shakya
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char str1[100], str2[100];
    int res;
    scanf("%s",str1);
    scanf("%s",str2);
    res =  strcasecmp(str1, str2);
    if(res == 0)
        printf("0");
    else if(res < 0)
        printf("-1");
    else
        printf("1");
    return 0;
}