public class StringDemo {
    public static void main(String[] args) {
        String str1 = "Hello"; //string literal
        String str2 = new String("Hello"); //dynamic memory allocation
        String str3 = "Hello";
        String str4 = "JSM";
        String str5 = new String("Hello");
        String str6 = new String("World");
        String str7 = "World";
        String str8 = "World";

        System.out.println("length                                                                                                                                           of str1 is :"+str1.length());
        System.out.println("str1 in upper case :"+str1.toUpperCase());

        System.out.println("length of str2 is :"+str2.length());
        System.out.println("str2 in upper case :"+str2.toUpperCase());

        System.out.println("length of str3 is :"+str3.length());
        System.out.println("str3 in upper case :"+str3.toUpperCase());

        System.out.println("length of str4 is :"+str4.length());
        System.out.println("str4 in upper case :"+str4.toUpperCase());

        System.out.println("length of str5 is :"+str5.length());
        System.out.println("str5 in upper case :"+str5.toUpperCase());

        System.out.println("length of str6 is :"+str6.length());
        System.out.println("str6 in upper case"+str6.toUpperCase());

        System.out.println("length of str7 is :"+str7.length());
        System.out.println("str7 in upper case"+str7.toUpperCase());

        System.out.println("length of str8 is :"+str8.length());
        System.out.println("str8 in upper case"+str8.toUpperCase());
    }
}
