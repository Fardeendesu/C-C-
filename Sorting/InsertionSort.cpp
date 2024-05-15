#include <iostream>
using namespace std;

class InsertionSort {
    public:
    void insertionsort(int arr[],int size) {
        int j,key;
        for (int i = 0; i < size; i++) {
            key = arr[i];
            j = i - 1;
            while (j >=0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j = j - 1;
            }
            arr[j+1] = key;
        }
    }
    void insert(int arr[],int size) {
        for (int i = 0; i < size; i++) {
            cout<<"Enter the no."<<(i+1)<<" element in the array: ";
            cin>>arr[i];
        }
        cout<<endl;
    }
    void print(int arr[], int size) {
        cout<<"The sorted array is: ";
        for (int i = 0; i < size; i++) {
            cout<<" "<<arr[i];
        }
        cout<<endl; 
    }
};
int main() {
    InsertionSort sort;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    sort.insert(arr,size);
    sort.insertionsort(arr,size);
    sort.print(arr,size);
}