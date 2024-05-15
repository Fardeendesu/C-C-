#include <stdio.h>

void BubbleSort (int arr[], int size) {
    for (int i =0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[i]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main () {
  
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for (i = 0; i < size; i++) {
        printf("Enter the no.%d element in the array: ",i+1);
        scanf("%d",&arr[i]);
        }
        printf("\n");

    BubbleSort(arr,size);
    for (int i = 0; i < size; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}