public class loop {
    public static void main(String args[]) {

        // // for (int counter = 0; counter < 11; counter++) {
        // // System.out.println(counter);
        // // }
        // // }
        int a = 5;
        int b = 4;

        // // Squar

        // for (int i = 0; i < a; i++) {
        //     for (int j = 0; j < b; j++) {
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        // // Rectanguler

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= b; j++) {
        // if (i == 1 || j == 1 || i == a || j == b) {
        // System.out.print("*");
        // } else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // }

        // // Hafe piramid

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // // Reverse Hafe piramid

        // for (int i = a; i >= 1; i--) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // // Hafe piramid for left side

        for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a - i; j++) {
        System.out.print(" ");
        }
        for (int j = 1; j <= i; j++) {
        System.out.print("*");
        }
        System.out.println();
        }

        // // Hafe piramid of number

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print(j + " ");
        // }
        // System.out.println();
        // }

        // // Reverse Hafe piramid of number

        // for (int i = a; i >= 1; i--) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print(j + " ");
        // }
        // System.out.println();
        // }

        // // 1 and 0

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= i; j++) {
        // int sum = i + j;
        // if (sum % 2 == 0)
        // System.out.print("1");
        // else {
        // System.out.print("0");
        // }
        // }
        // System.out.println();
        // }

        // // bater flye

        // for (int i = 1; i <= a; i++) {

        // int sqaces = 2 * (a - i);

        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }

        // for (int j = 1; j <= sqaces; j++) {
        // System.out.print(" ");
        // }

        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }
        // for (int i = a; i >= 1; i--) {

        // int sqaces = 2 * (a - i);

        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }

        // for (int j = 1; j <= sqaces; j++) {
        // System.out.print(" ");
        // }

        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // // slop line

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= a - i; j++) {
        // System.out.print(" ");
        // }
        // for (int j = 1; j <= 5; j++) {
        // System.out.print("*");
        // }
        // System.out.println();

        // }

        // // piramid by number

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= a - i; j++) {
        // System.out.print(" ");
        // }
        // for (int j = 1; j <= i; j++) {
        // System.out.print(i + " ");
        // }
        // System.out.println();
        // }

        // // Palindromic pattern

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= a - i; j++) {
        // System.out.print(" ");
        // }
        // for (int j = i; j >= 1; j--) {
        // System.out.print(j);
        // }
        // for (int j = 2; j <= i; j++) {
        // System.out.print(j);
        // }
        // System.out.println();
        // }

        // // Dimond pattern

        // for (int i = 1; i <= a; i++) {
        // for (int j = 1; j <= a - i; j++) {
        // System.out.print(" ");
        // }
        // for (int j = 1; j <= 2 * i - 1; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }
        // for (int i = a; i >= 1; i--) {
        // for (int j = 1; j <= a - i; j++) {
        // System.out.print(" ");
        // }
        // for (int j = 1; j <= 2 * i - 1; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

    }
}
