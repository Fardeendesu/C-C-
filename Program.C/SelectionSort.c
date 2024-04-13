#include <stdio.h>

void SelectionSort(int arr[], int size) {
    int mid;
    for (int i=0; i < size - 1; i++) {
        mid =i;
        for (int j=i+1; j < size; j++) {
            if(arr[j] < arr[mid]) {
                    mid = j;
            }
        }
                if(mid !=i) {
                    int temp = arr[mid];
                    arr[mid] = arr[i];
                    arr[i] = temp;
                }
            }
        }
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size; i++) {
        printf("Enter the element %d:", i);
        scanf("%d ",&arr[i]);
    }
    SelectionSort(arr,size);
    printf("The sorted array is: ");
    for (int i=0; i < size; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}