/* 
Author - Pulara Weerasinghe
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        int N;
        scanf("%d",&N);
        double d = 0.00;
        for(int j=1; j<=N; j++){
            int val;
            scanf("%d",&val);
            if((j%2 ==0) && (val%2 ==0))
                d += (val*0.10);
        }
        printf("%.2f\n",d);
    }
    return 0;
}