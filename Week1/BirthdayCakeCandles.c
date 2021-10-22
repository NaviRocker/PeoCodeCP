#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long int i,n,current,tallest=0,nbr=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&current);
        if(tallest<current){
            tallest=current;
            nbr=1;
        }else if (tallest==current){
            nbr++;
        }
    }
    printf("%d",nbr);
    return 0;
}