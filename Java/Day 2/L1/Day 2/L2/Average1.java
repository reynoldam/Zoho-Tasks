class Average

{
    int num1,num2,num3;

Average(int n1,int n2,int n3)

{
    num1 = n1;
    num2 = n2;
    num3 = n3;
}

void average()
   
    {
        int ave;
        ave = num1+num2+num3/3;
        System.out.println("The Average of three numbers is " + ave);
    }
}
public class Average1

{
    public static void main(String[] args)
    {
        Average a = new Average(2,3,4);
        a.average();
    }
}