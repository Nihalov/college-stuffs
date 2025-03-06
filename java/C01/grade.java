package C01;
import java.util.Scanner;
public class grade {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your Grade: ");
        int grade = sc.nextInt();
        if(grade>=90)
            System.out.println("Excellent work!");
        else if(grade>=80)
            System.out.println("Good Job!");
        else if(grade>=70)
            System.out.println("You can do better");
        else if(grade>=60)
            System.out.println("Work harder");
        else
            System.out.println("Failed. Try agian");
    sc.close();
    }
    
}
