package C01;
import java.util.Scanner;
public class armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        int k = num;
        int rem, res=0;
        while(k!=0){
            rem=k%10;
            res+=rem*rem*rem;
            k/=10;
        }
        if(res==num)
            System.out.println(num+" is armstrong");
        sc.close();
    }
}
