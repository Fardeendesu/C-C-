import java.util.Scanner;
public class InsertionSort {
    static Scanner sc = new Scanner(System.in);
    static void insertionsort(int arr[], int size) {
        int key,j;
        for (int i = 0; i < size; i++) {
            key = arr[i];
            j = i - 1;
            while ( j >=0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    static void insert(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            System.out.println("Enter the no."+(i+1)+" element in the array: ");
            arr[i] = sc.nextInt();
        }
    }
    static void print(int arr[], int size) {
        System.out.println("The sorted array: ");
        for (int i =0; i < size; i++) {
            System.out.print(" "+arr[i]);
        }
    }
    public static void main(String [] args) {      
        int size;
        System.out.println("Enter the size of the array: ");
        size = sc.nextInt();
        int[] arr = new int[size];
        insert(arr, size);
        insertionsort(arr, size);
        print(arr, size);
        sc.close();
    }
}
