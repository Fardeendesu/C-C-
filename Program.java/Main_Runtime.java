public class Main_Runtime implements Runnable {
    public void run() {
        System.out.println("Using runnable!");
    }
    public static void main(String[] args) {
        Main_Runtime bruh = new Main_Runtime();
        Thread thread = new Thread(bruh);
        thread.start();
    }
}
