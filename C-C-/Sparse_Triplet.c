#include <stdio.h>

#define MAX_SIZE 100

void printSparseMatrix(int sparseMatrix[][3], int numNonZero) {
    printf("Sparse Matrix:\n");
    for (int i = 0; i < numNonZero; i++) {
        printf("%d %d %d\n", sparseMatrix[i][0], sparseMatrix[i][1], sparseMatrix[i][2]);
    }
}

void printTriplet(int sparseMatrix[][3], int numNonZero) {
    printf("Triplet representation:\n");
    for (int i = 0; i < numNonZero; i++) {
        printf("(%d, %d, %d)\n", sparseMatrix[i][0], sparseMatrix[i][1], sparseMatrix[i][2]);
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int sparseMatrix[MAX_SIZE][3];
    int numNonZero = 0;

    printf("Enter the elements of the sparse matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int element;
            scanf("%d", &element);
            if (element != 0) {
                sparseMatrix[numNonZero][0] = i;
                sparseMatrix[numNonZero][1] = j;
                sparseMatrix[numNonZero][2] = element;
                numNonZero++;
            }
        }
    }

    printSparseMatrix(sparseMatrix, numNonZero);
    printTriplet(sparseMatrix, numNonZero);

    return 0;
}
