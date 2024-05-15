#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SelectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
       int mid = i;
        for (int j = i + 1; j < size; j++) {
            if(arr[j] < arr[mid]) {
                mid = j;
            }
        }
        swap(&arr[mid],&arr[i]);
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
        printf("Enter the no.%d element in the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    SelectionSort(arr, size);
    print(arr,size);
    return 0;
}