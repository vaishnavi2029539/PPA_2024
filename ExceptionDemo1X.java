import java.util.Scanner;

public class ExceptionDemo1X {
    public static void main(String[] args) {
    Scanner scannerobje = new Scanner(System.in);
        System.out.println("enter 1st no");
        int No1 = scannerobje.nextInt();
        System.out.println("enter 2st no");
        int No2 = scannerobje.nextInt();

        int iAns = 0;
        try
        {
            System.out.println("inside try block");
            iAns = No1/No2;
        }
        catch(ArithmeticException ex){
            System.out.println("inside catch block");
            System.out.println(ex);

        }
        catch(ArrayIndexOutOfBoundsException ex)
        {
            System.out.println("Array index out of bound"+ex);
        }
        catch(Exception ex)
        {
            System.out.println("all exception handling");
        }
        
        finally{
            System.out.println("inside finally block,don't care if there is an exception or not i will excute");

        }

        System.out.println("Division is:"+iAns);
    }
}
