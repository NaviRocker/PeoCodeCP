/* 
Author - Avishka Induwara
*/
#include <stdio.h>
int main (){
    int n,n1,n2,n3,n4;
    scanf("%d",&n);
    while(n<=9999){
        n=n+1;
        n1=n%10;
        n2=(n/10)%10;
        n3=(n/100)%10;
        n4=n/1000;
        if (n1==n2 || n1==n3 || n1==n4 || n2==n3 || n2==n4 ||n3==n4) continue;
        else
            printf("%d",n);
            break;
    }
    return 0;
}