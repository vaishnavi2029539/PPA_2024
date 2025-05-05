class Demo
{
    public int A,B;

    public demo()
    {
        System.out.println("inside Demo constructor");
        this.A=0;
        this.B=0;
    }

     //method without   
    //virtual void fun()=0; c++ syntax
    abstract void fun();

    //concrete method--method with body
    void gun()
    {
        System.out.println("inside Demo gun");
    }
}


public class AbstractDemo {
    Demo obj1 = new Demo();//can't instanceate/create obj of abstract class

}
