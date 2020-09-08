package JavaLab;

import java.util.Scanner;

public class ArmFact {

	static int armstrong(int n) {
		int total = 0, a, temp;
		temp = n;
		while (n > 0) {
			a = n % 10;
			n = n / 10;
			total = total + (a * a * a);
		}

		if (temp == total)
			System.out.println(temp + " is an Armstrong Number");
		else
			System.out.println(temp + " is not an Armstrong Number");

		return 0;
	}

	static int prime(int n) {

		int i, flag = 0;
		for (i = 2; i <= n / 2; ++i) {
			if (n % i == 0) {
				flag = 1;
				break;
			}
		}

		if (flag != 1)
			System.out.println(n + " is a Prime number.");
		else
			System.out.println(n + " is not a Prime number.");

		return 0;
	}

	static int evenodd(int n) {
		if (n % 2 == 0)
			System.out.println(n + " is an Even number");
		else
			System.out.println(n + " is an Odd number");

		return 0;
	}

	static int factorial(int n) {
		int fact = 1, i;
		for (i = 1; i <= n; i++)
			fact = fact * i;

		System.out.println("Factorial of " + n + " is " + fact);
		return 0;
	}

	public static void main(String[] args) {
		int n, menu;

		Scanner sc = new Scanner(System.in);
		menu = 0;

		while (menu != 5) {

			System.out.println("Welcome to the home menu");
			System.out.println("Please enter an option from the following :");
			System.out.println("(1)Armstrong number, (2)Prime number, (3) Even/Odd, (4)Factorial of a Number, (5)Exit");
			menu = sc.nextInt();
			switch (menu) {
				case 1:
					System.out.println("You chose Armstrong number option");
					System.out.println("Please enter a number");
					n = sc.nextInt();

					armstrong(n);
					System.out.println("");
					System.out.println("");
					break;

				case 2:
					System.out.println("You chose Prime Number option");
					System.out.println("Please Enter a number");
					n = sc.nextInt();

					prime(n);
					System.out.println("");
					System.out.println("");
					break;

				case 3:
					System.out.println("You chose Even/Odd option");
					System.out.println("Please enter a number");
					n = sc.nextInt();

					evenodd(n);
					System.out.println("");
					System.out.println("");
					break;

				case 4:
					System.out.println("You chose Factorial of a number option");
					System.out.println("Please enter a number");
					n = sc.nextInt();

					factorial(n);
					System.out.println("");
					System.out.println("");
					break;

				case 5:
					System.out.println("Exiting this program");
					break;

				default:
					System.out.println("This option is Invalid");
					System.out.println("");
					System.out.println("");
					break;

			}
		}
		sc.close();

	}

}
