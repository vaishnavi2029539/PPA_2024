class Arithmatic
{
    public int Addition(int A,int B){
        return A+B;
    }

    public int Addition(int A,int B,int C){
        return A+B+C;
    }

     public double Addition(double A,double B){
        return A+B;
    }

}

public class OverloadingX{
    public static void main(String[] args) {
        Arithmatic aobj = new Arithmatic();
        int ires = 0;
        double dres = 0;

        ires = aobj.Addition(10,20);
        System.out.println("Addition od two int"+ires);

        ires = aobj.Addition(10,20,30);
        System.out.println("Addition of three int"+ires);

        dres = aobj.Addition(10.9999,20.585);
        System.out.println("Addition od two double "+dres);
    }
}