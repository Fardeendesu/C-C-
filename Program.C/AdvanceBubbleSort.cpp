#include <iostream>

using  std::cout, std::cin ;

void AdvanceBubbleSort(int arr[], int size) {
    int flag = -1;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j<size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if(flag == 1) {
                break;
            }
        }
    }
}

void DisplayOutPut(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<""<<arr[i]<<std::endl;
    }
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for (int i = 0 ; i < size; i++) {
        cout<<"Enter the no. "<<i+1<<" Element of the array: ";
        cin>>arr[i];
    }
    cout<<"\n";
    cout<<"The sorted array is:"<<"\n";
    AdvanceBubbleSort(arr,size);
    DisplayOutPut(arr,size);
    return 0;
}
