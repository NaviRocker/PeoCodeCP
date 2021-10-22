/* 
Author - Hiruvi Senadheera
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int num_of_rows,i,j;
    int start = 1;
    scanf("%d",&num_of_rows);
    int end = (num_of_rows*2)-1;
    for(j=1;j<=num_of_rows;j++){
        for(i=1;i<=(num_of_rows*2)-1;i++){
            if(i==start || i==end)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        start = start+1;
        end = end-1;
    }
    return 0;
}