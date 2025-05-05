class Base //parent
{
    public int A,B;// char

    public Base()//default constructor
    {
        System.out.println("Inside Base constructor");
    }
    public void fun(){System.out.println("Inside base fun");}

}

class Derived extends Base //derived is child
{
    public int P,Q;//char
    public Derived(){ //default constructor
    System.out.println("inside Derived constructor");}
    public void gun(){System.out.println("inside base gun");}
}

class Derived2 extends Derived
{
    public int X,Y;
    public Derived2(){System.out.println("inside Derived2 default constructor"); }
    public void run(){System.out.println("inside Derived2 run"); }

}

public class Multilevel {
    public static void main(String[] args) {
        Derived2 dobj = new Derived2(); //no casting
        System.out.println("value of Base A"+dobj.A);
        System.out.println("value of Derived P "+dobj.P);
        dobj.fun();
        dobj.gun();
        dobj.run();
    }
}