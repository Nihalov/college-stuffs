class sample{
    public int addint(int a, int b){
        int sum = a+b;
        return sum;
    }
    public double addfloat(double a, double b){
        double sum = a+b;
        return sum;
    }
    public String addstring(String a, String b){
        String sum = a+b;
        return sum;
    }
    
}

public class methodOver{
    public static void main(String args[]){
        sample ob1 = new sample();
        System.out.println(ob1.addint(5,10));
        System.out.println(ob1.addfloat(5.4,0.2));
        System.out.println(ob1.addstring("hello", "world"));
        
    }
}