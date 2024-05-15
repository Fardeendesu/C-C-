#include <stdio.h>

void BubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print(int arr[], int size) {
    printf("The sorted elements are: ");
    for(int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    } 
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
    printf("Enter the no.%d element in the array: ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("\n");
    BubbleSort(arr,size);
    print(arr,size);
    return 0;
}