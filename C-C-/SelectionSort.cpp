#include <iostream> 
void SelectionSort(int arr[],int size) {
    int mid;
    for (int i = 0; i < size - 1; i++) {
        mid = i;
        for (int j = i+1; j<size; j++) {
            if(arr[j] < arr[mid]) {
                mid = j;
            }
        }
            if(mid !=i){
                int temp = arr[i];
                arr[i] = arr[mid];
                arr[mid] = temp;
            }
        }
}


int main() {
    int size;
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        std::cout<<"Enter No "<<i<<" elements:";
        std::cin>> arr[i];
    }
    std::cout<<"Array before sorting:";
    for (int i = 0; i < size; ++i) {
        std::cout<<" "<<arr[i]<<std::endl;
    }
    std::cout<<"\n";
    SelectionSort(arr,size);
    for(int i = 0; i < size; ++i) {
        std::cout<<" "<<arr[i];
    }
    std::cout<<"\n";
    return 0;
}