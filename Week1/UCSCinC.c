/* 
Author - Dinushan Vimukthi
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int l, n, s, p, q;
    scanf("%d", &n);
    if (n % 2 == 1 && n>4){
        q = n / 2 + 3;
        s = n / 2;
        l = n - 2;
        for (int i = 0; i < n; i++){
            if (i != n - 1){
                printf("*");
                for (p = 0; p < q; p++) printf(" ");
                printf("*");
            }
            else{
                printf(" ");
                for (int b = 0; b < q; b++) printf("*");
                printf(" ");
            }
            for (p = 0; p < s; p++) printf(" ");
            if (i == 0 || i == n - 1){
                printf(" ");
                for (int a = 0; a < q; a++) printf("*");
            }
            else{
                printf("*");
                for (int a = 0; a < q; a++) printf(" ");
            }
            for (p = 0; p < s; p++) printf(" ");
            if (i == 0){
                printf(" ");
                for (int a = 0; a < q; a++) printf("*");
            }
            else if (i == n - 1){
                for (int a = 0; a < q; a++) printf("*");
                printf(" ");
            }
            else{
                if (i == l / 2 + 1){
                    printf(" ");
                    for (int a = 0; a < q - 1; a++) printf("*");
                    printf(" ");
                }
                else{
                    if (i < l / 2 + 1){
                        printf("*");
                        for (int a = 0; a < q; a++) printf(" ");
                    }
                    else{
                        for (int a = 0; a < q; a++) printf(" ");
                        printf("*");
                    }
                }
            }
            for (p = 0; p < s; p++) printf(" ");
            if (i == 0 || i == n - 1){
                printf(" ");
                for (int a = 0; a < q; a++) printf("*");
            }
            else{
                printf("*");
                for (int a = 0; a < q; a++) printf(" ");
            }
            printf("\n");
        }
    }
}