import java.util.Scanner;

public class Fibonacci {
    public static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        } else {
            return (fibonacci(n-1) + fibonacci(n-2));
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a positive integer: ");
        int n = input.nextInt();

        if (n <= 0) {
            System.out.println("Please enter a positive integer");
        } else {
            System.out.println("Fibonacci sequence:");
            for (int i = 0; i < n; i++) {
                System.out.println(fibonacci(i));
            }
        }

        input.close();
    }
}

