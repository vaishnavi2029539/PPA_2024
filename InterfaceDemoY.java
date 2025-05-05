interface Demo{
    public void gun();
}

interface Hello extends Demo
{
    public void fun();

}

class JSM implements Hello {
    public void fun(){System.out.println("fun implementes");}
    public void fun(){System.out.println("gun implementes");}
}


public class InterfaceDemoY {

}