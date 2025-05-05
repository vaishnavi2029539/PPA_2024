import java.util.HashSet;
import java.util.TreeSet;

public class sortedset {
    public static void main(String[] args) {
        TreeSet<Integer> s = new TreeSet<>();
        s.add(100);
        s.add(50);
        s.add(40);
        s.add(10);
        s.add(20);   
        System.out.println(s);

        TreeSet<String> t = new TreeSet<>();
        t.add("vaishnavi");
        t.add("shiv");
        t.add("gautami");
        t.add("nikita");
        t.add("gautam");   
        System.out.println(t);
    }
}
