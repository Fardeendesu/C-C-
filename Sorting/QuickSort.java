import java.util.Scanner;

public class QuickSort {
    static Scanner sc = new Scanner(System.in);
    private static int pi;
    static void swap(int arr[], int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    static int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j <high; j++) {
            if(arr[j] < pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i, high);

        return (i+1);
    }
    static void quickSort(int arr[], int low, int high) {
        if (low < high) {
          int pi = partition(arr, low, high);
        }
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);

    }
    static void insert(int arr[],int size) {
        for (int i = 0; i < size; i++) {
            System.out.println("Enter the no."+(i+1)+" element in the array: ");
            arr[i] = sc.nextInt();
        }
    }
    static void print(int arr[], int size) {
        System.out.println("The sorted array is: ");
        for (int i =0; i < size; i++) {
            System.out.println(" "+arr[i]);
        }
        System.out.println("\n");
    }
    public static void main(String[] args) {
        int size;
        System.out.println("Enter the size of the array: ");
        size = sc.nextInt();

        int [] arr = new int[size];
        insert(arr, size);
        quickSort(arr, 0, size - 1);
        print(arr, size);
        sc.close();
    }
}
