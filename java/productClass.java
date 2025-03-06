import java.util.Scanner;

class Product {
    String pcode;
    String pname;
    double price;

    Product(String pcode, String pname, double price) {
        this.pcode = pcode;
        this.pname = pname;
        this.price = price;
    }
}

public class productClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter details(code, name, price) for Product 1:");
        Product p1 = new Product(sc.next(), sc.next(), sc.nextDouble());

        System.out.println("Enter details(code, name, price) for Product 2:");
        Product p2 = new Product(sc.next(), sc.next(), sc.nextDouble());

        System.out.println("Enter details(code, name, price) for Product 3:");
        Product p3 = new Product(sc.next(), sc.next(), sc.nextDouble());

        Product cheapest = p1;
        if (p2.price < cheapest.price) {
            cheapest = p2;
        }
        if (p3.price < cheapest.price) {
            cheapest = p3;
        }

        System.out.println("\nProduct with the lowest price:");
        System.out.println("Code: " + cheapest.pcode);
        System.out.println("Name: " + cheapest.pname);
        System.out.println("Price: " + cheapest.price);

        sc.close();
    }
}

