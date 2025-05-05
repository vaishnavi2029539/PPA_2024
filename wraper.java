public class wraper {
    public static void main(String[] args) {
        int i = 10;
        Integer iobj = i; //boxing
        System.out.println(i);
        System.out.println(iobj);

        int no = iobj; //unboxing
        System.out.println(no);
        
    }
}
