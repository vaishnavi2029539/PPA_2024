import java.util.Stack;
import javax.swing.plaf.nimbus.*;

public class stack {
    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        s.push(1);
        s.push(2);
        s.push(100);
        s.push(30);
        s.push(200);
        s.push(40);
        System.out.println("removed:"+s.pop());
        System.out.println("current element at top:"+s.peek());
        System.out.println("element from top at location:"+s.search(30));
        
    }
}
