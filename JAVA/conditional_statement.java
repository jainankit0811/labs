import java.util.*;

class conditional_statement {

    public static void main(String arg[]) {
        //

        // Scanner sc = new Scanner(System.in);
        // int age = sc.nextInt();

        // if (age > 18) {
        // System.out.println("Adult");
        // } else {
        // System.out.println("Not adult ");
        // }

        // odd and even

        // Scanner sc = new Scanner(System.in);
        // int x = sc.nextInt();

        // if (x % 2 == 0) {
        // System.out.println("even");
        // } else {
        // System.out.println("odd");
        // }

        // assigment
        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // int b = sc.nextInt();

        // if (a == b) {
        // System.out.println("Equal");
        // } else if (a > b) {
        // System.out.println("a is greater");
        // } else {
        // System.out.println("b is greater");
        // }

        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();

        switch (button) {
            case 1:
                System.out.println("hello");
                break;
            case 2:
                System.out.println("Nameste");
                break;
            case 3:
                System.out.println("Bonjour");
                break;
            default:
                System.out.println("Invalid Button");
                break;

        }

    }
}