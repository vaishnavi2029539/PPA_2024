import java.util.ArrayList;
import java.util.*;

public class listiterator {
    public static void main(String[] args) {
        ArrayList<Integer> l1 = new ArrayList<>();
        l1.add(10);
        l1.add(20);
        l1.add(30);
        l1.add(40);
        l1.add(55);

        ListIterator itr = l1.listIterator();
        while(itr.hasNext())
        {
            itr.add(1000);
            Integer i = (Integer)itr.next();
            if(i%2==0)
            {
                if(i==50)
                {
                    itr.set(100);
                }
                System.out.println(i+"is even");
            }else{
                System.out.println(i+"is odd number");
                System.out.println(itr.previous());
                itr.remove();
            }
        }
        System.out.println("-----------------");
        System.out.println(l1);
    }
}
