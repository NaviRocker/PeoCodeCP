/* 
Author - Nadeesha Epa
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];   
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                printf("%d %d",j+1,i+1);
                break;
            }
        }
    }
    return 0;
}