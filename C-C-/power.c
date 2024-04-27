#include <stdio.h>
#include "power.h"
int main()
{
    double x;
    int y;
    printf("Enter the base(x):");
    scanf("%lf",&x);
    printf("Enter the exponent(y):");
    scanf("%d",&y);
    double niga =  power (x, y);
    printf("The ans is:%f",niga);
}