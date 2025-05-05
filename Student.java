public class Student {
    int RollNo;
    int Marks;
    String name;
    String address;

    public void setName(String name)
    {
        this.name=name;
    }
    public void setaddress(String address)
    {
        this.address=address;
    }
    public void setMarks(int Marks)
    {
        this.Marks=Marks;
    }
    public void setRollNo(int RollNo)
    {
        this.RollNo=RollNo;
    }

    public String getName() {return this.name;}
    public String getaddress() {return this.address;}
    public int getMarks() {return this.Marks;}
    public int getRollNo() {return this.RollNo;}

    @Override
    public String toString()
    {
        return "RollNo="+this.RollNo+
        "Name="+this.name+
        "address="+this.address+
        "Marks="+this.marks;
    }
}
