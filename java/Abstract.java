import java.util.Scanner;

public class Abstract {
    public static void main(String[] args) {
        Scanner Scanner = new Scanner(System.in);
        int n;
        System.out.print("Enter the number of elements: ");
        n = Scanner.nextInt();
        Praloy obj = new Praloy();
        int arr[] = obj.TakeInput(n);
        System.out.println(obj.LinearSearch(arr,n));
        System.out.println(obj.BinarySearch(arr,n));
        Scanner.close();
    }
}
class Praloy extends Method {
    public int[] TakeInput(int n) {
        Scanner Scanner = new Scanner(System.in);
        int arr[] = new int[n];
        System.out.println();
        for(int i = 0;i<n;i++){
            arr[i] = Scanner.nextInt();
        }
        return arr;
    }
public int LinearSearch(int arr[], int size) {
        System.out.println("enter the element to find: ");
        Scanner Scanner = new Scanner(System.in);
        int n = Scanner.nextInt();
        for (int i = 0; i < size; i++) {+
            if (arr[i] == n) {
                return i; 
            }
        }
        return -1;
     
    }
public int BinarySearch(int list[],int size) {
        int left = 0,mid;
        int right = size-1;
        boolean isFound = false;
		System.out.println("enter the element to find: ");
        Scanner Scanner = new Scanner(System.in);
        int Horsedip_Height = Scanner.nextInt();
		
		while(left <= right)
		{
			mid=(int)(left+right)/2;
			
			if (list[mid]>Horsedip_Height)
			{
				right=mid-1;
			}
			else if (list[mid]<Horsedip_Height)
			{
				left=mid+1;
			}
			else if (list[mid]==Horsedip_Height)
			{   
                isFound = true;
				return mid;
			}

		}
		if (!isFound) 
		{
        		System.out.println("Element not found");
               
        	}
        return right;
        
	}

}

abstract class Method {
    public abstract int[] TakeInput(int n);

    public abstract int LinearSearch(int arr[], int size);

    public abstract int BinarySearch(int list[],int size);
}
