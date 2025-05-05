import java.util.*;
class ExceptionDemo1
{
    public static void main(String x[]) {
        Scanner scannerobje = new Scanner(System.in);
        System.out.println("enter 1st no");
        int No1 = scannerobje.nextInt();
        System.out.println("enter 2st no");
        int No2 = scannerobje.nextInt();

        int iAns = 0;
        iAns = No1/No2;
    System.out.println("Division is:"+iAns);
   }
}