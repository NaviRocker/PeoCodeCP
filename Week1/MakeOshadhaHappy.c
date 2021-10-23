/* 
Author - Neethamadhu Madurasinghe
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int d;
    float h;
    scanf("%d", &d);
    scanf("%f", &h);
    float villanPower = 50.0;
    float roddaPower = 0.0;
    int counter = 0;
    for(int i = 0; i < d; i++){
        villanPower = villanPower + 10.0;
        if(counter == 0) h = h;
        else if(counter == 1) h = h/2;
        else h = h * 3;
        if(h > 24) h = 1;
        roddaPower = roddaPower + (6 * h);
        counter++;
        if(counter > 2) counter = 0;
    }
    if(roddaPower >= villanPower)
        printf("Rodda will win");
    else
        printf("Rodda will lose");
    return 0;
}