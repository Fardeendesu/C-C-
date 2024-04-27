import java.util.Scanner;
import java.util.Arrays;

public class BinarySch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the array elements (sorted):");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.print("Enter the value to search: ");
        int searchValue = scanner.nextInt();

        int result = Arrays.binarySearch(arr, searchValue);

        if (result >= 0) {
            System.out.println("Value found at index " + result);
        } else {
            System.out.println("Value not found in the array");
        }
    }
}
