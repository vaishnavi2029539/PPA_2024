import java.util.*;

public class UserDefineChecked {


    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age:");
        int iAge = sc.nextInt();
        
        try{ 
           if(iAge<18)
           {
            AgeInvalidException obj = new AgeInvalidException("YOur age is less then 18 years");
            throw obj;
            //throw new AgeInvalidException("YOur age is less then 18 years");
           }
        }
        catch (AgeInvalidException ex)
            {
                System.out.println(ex);
            }
    }
}

class AgeInvalidException extends Exception
{
    public AgeInvalidException(String msg)
    {
        super(msg);
    }
}
