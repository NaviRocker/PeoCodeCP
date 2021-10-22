/* 
Author - Nilshan Deemantha
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n1,n2,num,b,i,a;
    scanf("%d %d",&n1,&n2);
    for(int i =n1;i<=n2;i++){   
        a = i;
        num = 0;
        while(a>0){
            b = a%10;
            num = num + (b*b*b);
            a = a/10;
        }
        if(i==num){
            printf("%d\n",i);
        }
    }
    return 0;
}