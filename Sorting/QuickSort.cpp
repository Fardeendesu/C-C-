#include <iostream>
using namespace std;

class QuickSort {
    public:
        void swap(int *a, int *b) {
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
                    swap(&arr[i], &arr[j]);
                }
            }
            swap(&arr[i], &arr[high]);
            return (i+1);
        }
        void quickSort(int arr[], int low, int high) {
            int pi;
            if (low < high) {
                 pi = partition(arr,low,high);
            }
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
           
};
int main() {
    QuickSort sort;
    int size;
    cout <<"Enter the size of the array: ";
    cin>>size;
    int arr[size];

    for (int i =0; i < size; i++) {
                cout<<"Enter the no."<<(i+1)<<" element in the array: ";
                cin>>arr[i];
            }
            cout<<"\n";
    sort.quickSort(arr,0,size - 1);
      cout<<"The sorted array is: ";
            for (int i =0; i < size; i++) {
                cout <<" "<<arr[i];
                }
            cout<<"\n";
        }
        

