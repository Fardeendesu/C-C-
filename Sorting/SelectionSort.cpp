#include <iostream>
using namespace std;

class SelectionSort {
    public:
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void selectionsort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            int mid = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[mid]) {
                    mid = j;
                }
            }
            swap(&arr[mid],&arr[i]);
        }
    }

void insert(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<"Enter the no."<<i+1<<" element in the array: ";
        cin>> arr[i];
    }
    cout<<"\n";
}
void print(int arr[], int size) {
    cout<<"The sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout<<" "<<arr[i];
    }
    cout <<endl;
    }
};
int main() {
    SelectionSort sort;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    sort.insert(arr,size);
    sort.selectionsort(arr,size);
    sort.print(arr,size);
}