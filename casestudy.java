public class casestudy {
    MyRunnable runnamble = new MyRunnable();
    Thread t1 = new Thread();
    Thread t2 = new Thread(runnamble);

    t1.start();
    //runnable.start();
    t1.run();
    t2.run();//no thread will br created
    t2.start();//thread will be created

}

class MyRunnable implements Runnable
{
    public void run()
    {
        System.out.println("child Thread");
    }
}
