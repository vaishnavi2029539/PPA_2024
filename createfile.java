import java.io.*;
class createfile
{
    public static void main(String[] args) {
        try{
            File fileobj = new File("ppa.txt");
            fileobj.createNewFile();
        }catch(Exception e){
            System.out.println(e);
        }
    }
}