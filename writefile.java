import java.io.FileOutputStream;

public class writefile {
    public static void main(String[] args) {
        try{
            String data = "fabulous infosystem";
            byte Arr[] = data.getBytes();
            System.out.println(Arr.length);
            FileOutputStream fos = new FileOutputStream("ppa.txt");
            fos.write(Arr);
        }catch (Exception e){
            // TODO: handle exception
        }
    }
}
