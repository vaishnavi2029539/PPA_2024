interface Circle
{
    public float PI = 3.14f;
    public float Area(float radius);
    public float circumference(float radius);
}

class Shapes implements Circle
{
    public float Area(float radius){
        return PI*radius*radius;
    }

    public float circumference(float r) {
        return 2*PI*r;
    }
}

public class InterfaceDemo1 {
   public static void main(String[] args) {
    PPA obj1 = new Shapes();
    System.out.println("value of PI"+Circle.PI);//can access PI as it is public static
    //Circle.PI = 10.5f;//can;t asssign final variable
    float fRes=0.0f;
    fRes = obj1.Area(Radius:5)
    System.out.println("Area is:"+fRes"square")
    fRes = obj1.circumference(R:10)
    System.out.println("Circumference is ="+fRes +"m");
   }

}