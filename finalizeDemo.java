public class finalizeDemo {
    public static void main(String[] args) {
        Employee e1 = new Employee("vaishanvi",  100000, 19, "pune");
        e1.display();
        e1=null;
        System.gc();
    }
}


class Employee
{
    public String name;
    public int salary;
    public int age;
    public String address;


    Employee(String name,int salary, int age,String address)
    {
        this.name = name;
        this.salary = salary;
        this.age = age;
        this.address = address;
    }

    void display()
    {
        System.out.println("Employee name:"+ this.name);
        System.out.println("Employee salary:"+ this.salary);
        System.out.println("Employee age:"+ this.age);
        System.out.println("Employee address:"+ this.address);

    }

    protected void finalize()
    {
        System.out.println("inside finalize method");
    }
}  