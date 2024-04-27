public class Main_Thread extends Thread {
    public void run() {
        System.out.println("Thread using extends");
    }
    public static void main(String[] args) {
        Main_Thread thread = new Main_Thread();
        thread.start();

    }
}