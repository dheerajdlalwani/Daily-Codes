package javalab2;

import java.util.Scanner;

public class Assignment {

	public static void main(String[] args) {
		int a, b, c;
		System.out.println("Enter Two Numbers");
		final Scanner sc = new Scanner(System.in);

		System.out.println("Enter the first number :");
		a = sc.nextInt();

		System.out.println("Enter the second number :");
		b = sc.nextInt();

		sc.close();

		c = a + b;
		System.out.println("c = a + b = " + c);

		c += a;
		System.out.println("c += a = " + c);

		c -= a;
		System.out.println("c -= a = " + c);

		c *= a;
		System.out.println("c *= a = " + c);

		c /= a;
		System.out.println("c /= a = " + c);
	}

}
