import java.util.Scanner;

public class Java {
    public static void main(String[]args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter thy name:");
        String GetInput =sc.nextLine();
        System.out.println("Inputted: "+GetInput);
        sc.close();
    }
}