abstract class Demo //RBI
{
    public int A,B;

    public Demo()
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

class Hello extends Demo//SBI extends RBI
{
    public Hello(){System.out.println("Hello constructor");}
    
    public void fun()
    {
        System.out.println("Hello fun");
    }

}

public class AbstractDemo1 {
    public static void main(String[] args){
        Hello hobj = new Hello();
        hobj.fun();
        hobj.gun();
    //Demo obj1 = new Demo();//can't instanceate/create obj of abstract class

    }
}
