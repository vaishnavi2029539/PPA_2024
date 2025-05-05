class Base //parent
{
    public int A,B;// char

    public Base()//default constructor
    {
        System.out.println("inside Base deafult constructor");
   
    }
    public void fun(){System.out.println("inside base fun");}

}

class Derived extends Base //derived is child
{
    public int P,Q;//cshar
    public Derived(){
        System.out.println("inside Derived deafult constructor");
    }
    public void gun(){System.out.println("inside base gun");}
}

public class Single {
    public static void main(String[] args) {
        Derived dobj = new Derived(); //no casting
        System.out.println("value of Base A"+dobj.A);
        dobj.fun();
        dobj.gun();
    }
}