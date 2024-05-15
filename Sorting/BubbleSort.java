import java.util.Scanner;
public class BubbleSort {

  static void nigga(int arr[], int size) {
        for (int i =0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++){
                if(arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

static void print(int arr[], int size) {
    System.out.println("The sorted array is: ");
    for(int i = 0; i < size; i++) {
        System.out.print(" "+arr[i]);
    }
}
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the size of the array: ");
    int size = sc.nextInt();

    int[] arr = new int[size];
    for (int i = 0; i < size; i++) {
        System.out.println("Enter the no. "+(i+1)+" element in the array: ");
        arr[i] = sc.nextInt();
    }

    nigga(arr, size);
    print(arr,size);
    sc.close();
    }
}
