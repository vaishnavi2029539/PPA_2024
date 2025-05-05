import java.util.HashMap;

public class hashmap {
    public static void main(String[] args) {
    HashMap<Integer,String> h = new HashMap<>();
    h.put(101,"vaishnavi");//entryset
    h.put(102,"shiv");
    h.put(103,"nikita");
    h.put(101,"gautami");

    System.out.println("name of roll no:" +h.get(103));
    System.out.println(h);

    for(Integer key : h.keySet())
    {
        System.out.println("key is :"+ key +",value is:"+h.get(key));
    }


    }
    

}
