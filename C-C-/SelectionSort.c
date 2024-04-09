#include <stdio.h>

void SelectionSort(int arr[],int size) {
    int mid;
    for (int i = 0; i < size - 1; i++) {
        mid = i;
        for (int j = i+1; j < size; j++) {
            if(arr[j] < arr[mid]) {
                 mid = j;
            }
        }
        if(mid !=i) {
                int temp = arr[i];
                arr[i] = arr[mid];
                arr[mid] = temp;
            }
        }
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i=0; i<size; i++) {
        printf("Enter No.%d elements: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting:");
    for (int i=0; i <size; i++)  {
        printf("%d",arr[i]);
    }
    printf("\n");
    SelectionSort(arr,size);
    printf("Array after sorting: ");
    for(int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}