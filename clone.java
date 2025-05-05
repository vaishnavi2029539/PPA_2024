public class clone {
    public static void main(String[] args) throws CloneNotSupportedException {
        Employee e1 = new Employee("vaishanvi",  100000, 19, "pune");
        e1.display();
        System.out.println("e1 hashcode: "+e1.hashCode());
        Employee e2 = (Employee)e1.clone();
        e2.display();
        System.out.println("e2 hashcode: "+e2.hashCode());
        System.gc();
    }
}


class Employee implements Cloneable
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

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}