package C01;
import java.util.Scanner;
public class eligibility {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks of Maths, Physics, Chemistry");
        int maths = sc.nextInt();
        int physics = sc.nextInt();
        int chemistry = sc.nextInt();
        int total = maths+physics+chemistry;
        if(maths>=60 && physics>=50 && chemistry>=40 && total>=200){
            System.out.println("You are eligible");
        }else if(maths+physics>=150){
            System.out.println("You are eligible");
        }else{
            System.out.println("You are not eligible");
        }
        sc.close();
    }
}
