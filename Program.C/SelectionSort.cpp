#include <iostream>

using namespace std;

void SelectionSort(int arr[], int size) {
    int mid;
    for (int i = 0; i < size - 1; i++) {
        mid = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[mid]) {
                mid = j;
            }
        }
        if (mid !=i) {
            int temp = arr[mid];
            arr[mid] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout<<"Enter the element"<<i<<":";
        cin>>arr[i];
    }
    SelectionSort(arr, size);
    cout<<"The sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
    return 0;
}