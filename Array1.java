

public class Array1 {
    public static void main(String[] args) {
        int Arr[] = {10,20,30,40,50};//member innitialization list
        
        int Arr2[] = new int [5];//member by member initialization
        Arr[0] = 10;
        Arr[1] = 20;
        Arr[2] = 30;
        Arr[4] = 40;
        Arr[3] = 50;

        System.out.println("length of Arr1" +Arr.length);
        
        int iCnt = 0;
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
