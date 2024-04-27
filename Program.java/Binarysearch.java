import java.util.Scanner;

public class Binarysearch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = scanner.nextInt();

        int[] array = new int[n];

        System.out.println("Enter the (sorted) elements:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        System.out.print("Enter the value to search: ");
        int searchValue = scanner.nextInt();

        int result = binarySearch(array, searchValue);

        if (result != -1) {
            System.out.println("Value found at index:"+result);
            result++;
            System.out.println("Value found at position " + result);
        } else {
            System.out.println("Value not found in the array");
            scanner.close();
        }
    }

    private static int binarySearch(int[] array, int searchValue) {
        int low = 0;
        int high = array.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (array[mid] == searchValue) {
                return mid;
            } else if (array[mid] < searchValue) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1; 
    }
}
