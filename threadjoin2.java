public class threadjoin2 {
    public static void main(String[] args) {
        MyThread m1 = Thread.currentThread();
        MyThread t1 = new MyThread();
        t1.join();

    }
}

