/* 
Author - Sanduni Aloka
*/
#include<stdio.h>
int main(){
    int year, arr[4], found = 0, i, j, n;
    scanf("%d", &n);
    while(found!=1){
        n=n+1;
        year=n;
        for(i=0;i<4;i++){
            arr[i]=year%10;
            year=year/10;    
        }
        for(i=0;i<3;i++){
            for(j=i+1;j<4;j++){
                if(arr[i]==arr[j]){
                    found=1;
                    break;
                }
            }
            if(found==1) break;
        }
        if(found==0){
            printf("%d", n);
            return 0;
        }
        found=0;
    }
}