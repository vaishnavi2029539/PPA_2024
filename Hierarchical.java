class Base //parent
{
    public int A,B;// char

    public Base()//default constructor
    {
        System.out.println("Inside Base constructor");
    }
    public void fun(){System.out.println("Inside base fun");}

}

class Derived extends Base //child1 of Base
{
    public int P,Q;//char
    public Derived(){ //default constructor
    System.out.println("inside Derived constructor");}
    public void gun(){System.out.println("inside base gun");}
}

class Derived2 extends Base //child2 of Base
{
    public int X,Y;
    public Derived2(){System.out.println("inside Derived2 default constructor"); }
    public void run(){System.out.println("inside Derived2 run"); }

}

public class Hierarchical {
    public static void main(String[] args) {
        Derived dobj1 = new Derived();
        Derived2 dobj = new Derived2(); //no casting

        System.out.println("value of Base A"+dobj1.A);
        System.out.println("value of Derived P "+dobj1.P);
        dobj.fun();
        dobj.run();
    }
}