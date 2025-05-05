public class threadjoin {
    public static void main(String[] args) throws InterruptedException{
        Mythread seeta = new Mythread();
         seeta.start();
         seeta.join();

        for(int i=0; i<5;i++)
         {
            System.out.println("ram thead");
        }
    }
}


class Mythread extends Thread
{
    public void run()
    {
         for(int i=0; i<5;i++)
         {
            System.out.println("seeta thead");
            
            try{Thread.sleep(2000);
            }catch(InterruptedException e){} 
        }
    }
}