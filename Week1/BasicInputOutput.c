/* 
Author - Avishka Induwara
*/
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main (){
    char symbol; 
    int num;
    float fnum;
    long lnum;
    double dnum;
    int total =0;
    scanf ("%c",&symbol); 
    scanf ("%d",&num); 
    scanf ("%f",&fnum); 
    scanf ("%ld",&lnum);
    scanf ("%lf",&dnum);    
    total+=printf("%c\n",symbol);
    total+=printf("%d\n",num);
    total+=printf("%o\n",num);
    total+=printf("%X\n",num);
    total+=printf("%f\n",fnum);
    total+=printf("%ld\n",lnum);
    total+=printf("%lf\n",dnum);
    total+=printf("%d", total);
    return 0;
}