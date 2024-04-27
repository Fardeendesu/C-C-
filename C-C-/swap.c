#include <stdio.h>
void SwapValue(int *a, int *b)
{
    a=b;
    b=a;
}
int main()
{
    int *x,*y;
    printf("Enter the value of A and B:");
    scanf("%d%d",&x,&y);
    int sv = SwapValue(&x,&y);
    printf("The value of x is:",x);
    printf("The value of y is:",y);
}