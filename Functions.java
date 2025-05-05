public class Functions {

    int number = 10;
    public void callByValue(int x)
    {
        x++;
        System.out.println("value of x inside ethod"+x);
    }

    public void callByReference(Functions obj1)
    {
        obj1.number++;
        System.out.println("value of obj number inside :"+obj1.number);
    }
  
    public static void main(String[] args) {
        Functions obj1 = new Functions();

        int i = 10;
        System.out.println("Value of i before"+i);
        obj1.callByValue(i);
        System.out.println("value of i after"+i);
        System.out.println("value of obj.number inside :"+obj1.number);

    }
}