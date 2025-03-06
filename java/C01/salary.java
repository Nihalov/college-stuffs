package C01;

import java.util.Scanner;

public class salary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Job Role: ");
        String role = sc.next();
        System.out.print("Enter Experience (in yrs): ");
        int exp = sc.nextInt();
        if(role.equals("Manager")){
            if(exp < 3){
                System.out.println("Salary : "+50000);
            }
            else if(exp < 5){
                System.out.println("Salary : "+(50000+(50000*0.1)));
            }
            else{
                System.out.println("Salary : "+(50000+(50000*0.2)));
            }
        }
        else if(role.equals("Developer")){
            if(exp < 3){
                System.out.println("Salary : "+30000);
            }
            else if(exp < 5){
                System.out.println("Salary : "+(30000+(30000*0.1)));
            }
            else{
                System.out.println("Salary : "+(30000+(30000*0.2)));
            }
        }
        else if(role.equals("Intern")) {
            if(exp < 3){
                System.out.println("Salary : "+15000);
            }
            else if(exp < 5){
                System.out.println("Salary : "+(15000+(15000*0.1)));
            }
            else{
                System.out.println("Salary : "+(15000+(15000*0.2)));
            }
        }
        else{
            System.out.println("Invalid !!");
        }
        sc.close();
    }
}