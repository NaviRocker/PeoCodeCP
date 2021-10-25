#include <stdio.h>
#include <string.h>
#include <math.h>
/* 
Author - Charith Pietersz
*/
#include <stdlib.h>
int main() {
    long n;
    scanf("%ld",&n);
    long x,y;
    scanf("%ld",&x);
    scanf("%ld",&y);
    //long a[n+1];
    for(long i=0;i<=n;i++){
        long sum;
        if(x==y){
            sum=x*n;
            printf("%ld ",sum);
            break;
        }
        if(x<y) sum=y*i+x*(n-i);
        else sum=x*i+y*(n-i);
        printf("%ld ",sum);
    }
    printf("\n");
    return 0;
}