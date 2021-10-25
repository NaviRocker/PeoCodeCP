/* 
Author - Chethana Wijesinha
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long n,f=1;
    scanf("%ld",&n);
    while(n>0){
        f=f*n;
        n=n-1;
    }
    printf("%ld",f); 
    return 0;
}