import java.util.*;
class substract
{
    public static void main(String[] args) {
        Scanner scannerObj = new Scanner(System.in);
        System.out.println("enter first number");
        int No1 = scannerObj.nextInt();

        System.out.println("enter second number");
        int No2 = scannerObj.nextInt();

        int Ans = No1-No2;
        System.out.println("Addition is  =" +Ans);

        scannerObj.close();
    }
}