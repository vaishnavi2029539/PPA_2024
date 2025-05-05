class Demo
{
    public int A;
    public final int B;//const in c++


Demo()
{
    A=10;
    B=20;
}
Demo(int i, int j)
{
    A=i;
    B=j;
}
}

public class Final1 {
    public static void main(String[] args)
     Demo dobj = new Demo();
     System.out.println("value of A:"+dobj.A);
     System.out.println("value of B:"+dobj.B);

     dobj.A++;
     //dobj.B++;

     Demo dobj2 = new Demo(30,40);
     System.out.println("value of A:"+dobj2.A);//30
     System.out.println("value of B:"+dobj2.B);//40
}