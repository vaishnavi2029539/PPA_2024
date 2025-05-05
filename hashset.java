import java.util.*;
public class hashset {
    public static void main(String[] args) {
        HashSet<String> hs = new HashSet<>();
        hs.add("sss");
        hs.add("aaa");
        hs.add("bbb");
        hs.add("ccc");
        hs.add("aaa");
        System.out.println(hs.add("bbb"));
        hs.add(null);
        System.out.println(hs);


    }
}
