import java.util.*;
public class ExceptionDemo2 {
   public static void main(String[] args) {
    Scanner scobj = new Scanner(System.in);
    int Arr[]={10,20,30,40,50};
    System.out.println("pleaase enter the index from where you wnat to fetch the data");
    int index = scobj.nextInt();
    System.out.println("data at index "+index+ "is" +Arr[index]);

   } 
}
