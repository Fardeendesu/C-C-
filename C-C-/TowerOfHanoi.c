#include <stdio.h>
#include <stdlib.h>

void Tower(int n, char J, char B, char C);

void Tower(int n, char J, char B, char C) {
    if(n == 1) {
        printf("Move disk 1 from %c to %c\n", J, C);
    } else {
        Tower(n - 1, J, C, B);
        printf("Move disk %d from %c to %c\n", n, J, C);
        Tower(n - 1, B, J, C);
    }
}

int main() {
    char src, dest, Aux;
    int n;
    
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    printf("Enter the names of disks: ");
    scanf(" %c %c %c", &src, &dest, &Aux);

    Tower(n, src, Aux, dest);

    return 0;
}
