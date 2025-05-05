class Base
{
    public void fun() //1000
    {System.out.println(x:"Base fun()");}

    public void gun()
    {System.out.println(x:"Base gun");}

    public void sun()
    {System.out.println(x:"inside Base sun");}

    public void run()
    {System.out.println(x:"inside Base run");}

}

class Derived extends Base
{
     public void fun() //1000
    {System.out.println(x:"Derived fun()");}

    public void gun()
    {System.out.println(x:"derived gun");}

    public void run(int no)
    {System.out.println(x:"inside Derived run");}

     public void mun()
    {System.out.println(x:"inside Derived mun");}

}

public class Overriding {
    public static void main(String[] args){
    Base baseobj = new derived(); //upcasting
    // Derived derobj = ner Base(); //not allowed
    Derived derobj = new derived();
    baseobj.fun(); //call 5000 from derived
    baseobj.gun(); //call 6000 from derived
    baseobj.sun(); //call 3000 from base
    baseobj.run(); //call 4000 from base

    //baseobj.run(10); 
    //error bcause reference class
    derobj1.run();
    derobj1.run(no:10);

    }
}