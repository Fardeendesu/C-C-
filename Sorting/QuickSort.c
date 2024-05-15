#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void QuickSort(int arr[], int low, int high){
    if (low < high) {
        int pi = partition(arr,low,high);

        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
}
void insert(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the no.%d element in the array:",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\n");
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
 
    insert(arr,size);
    QuickSort(arr,0,size-1);
    print(arr,size);

    return 0;
}