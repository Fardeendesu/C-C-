#include <stdio.h>

void insertionSort(int arr[],int size) {
    int key,j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
void print(int arr[], int size) {
    printf("The sorted array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the no.%d element of the array: ",(i+1));
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,size);
    print(arr,size);
}