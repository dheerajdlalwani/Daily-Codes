package javalab2;

import java.util.Scanner;

public class Logical {
	public static void main(String[] args)
	{
		boolean a=true,b=false;
		System.out.println("Input true or false for a and b");
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter value for a");
		a = sc.nextBoolean();
		System.out.println("Enter value for b");
		b = sc.nextBoolean();
	
//		System.out.println("Enter the first number :");
//		a = sc.nextInt();
//		
//		System.out.println("Enter the second number :");
//		b = sc.nextInt();
//		
//		sc.close();
		
		System.out.println("a&&b "+(a&&b));
		System.out.println("a||b "+(a||b));
		System.out.println("!(a&&b) "+!(a&&b));
		
		
		sc.close();
		
	}

}
