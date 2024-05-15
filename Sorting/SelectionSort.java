import java.util.Scanner;
public class SelectionSort {
    static void swap(int arr[],int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    static void selectionSort(int arr[], int size) {
        int mid;
        for (int i = 0; i < size - 1; i++) {
            mid = i;
            for (int j= i+1; j < size; j++) {
                if(arr[j] < arr[mid]) {
                    mid = j;
                }
            }
            swap(arr,mid,i);
        }
    }
static void insert(int arr[], int size) {
    Scanner sc = new Scanner(System.in);
    for (int i = 0; i < size; i++) {
        System.out.println("Enter the no."+(i+1)+" element in the array: ");
        arr[i] = sc.nextInt();
    }
    sc.close();
}
static void print(int arr[], int size) {
    System.out.println("The sorted array is: ");
    for (int i = 0; i < size; i++) {
        System.out.print(" "+arr[i]);
      }
    }
    public static void main(String []args) {
       Scanner sc = new Scanner(System.in);
        int size;
        System.out.println("Enter the size of the array: ");
        size = sc.nextInt();
    int[] arr = new int[size];
   insert(arr, size);
   selectionSort(arr, size);
   print(arr, size);
   sc.close();
    }
}
