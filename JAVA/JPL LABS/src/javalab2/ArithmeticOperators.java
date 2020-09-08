package javalab2;

import java.util.Scanner;

public class ArithmeticOperators {
	public static void main(String[] args) {
		int a, b, temp;
		System.out.println("Enter Two Numbers");
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the first number :");
		a = sc.nextInt();

		System.out.println("Enter the second number :");
		b = sc.nextInt();

		sc.close();
		// Addition
		temp = a + b;
		System.out.println("a + b = " + temp);

		// Substraction
		temp = a - b;
		System.out.println("a - b = " + temp);

		temp = a * b;
		System.out.println("a * b = " + temp);

		temp = a / b;
		System.out.println("a / b = " + temp);

		temp = a % b;
		System.out.println("a % b = " + temp);

		temp = a++;
		System.out.println("a ++ = " + temp);

		temp = a--;
		System.out.println("a -- = " + temp);
	}
}
