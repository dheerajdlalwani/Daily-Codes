package javalab2;
import java.util.Scanner;

public class Relational {
	public static void main(String[] args)
	{
		int a,b;
		System.out.println("Enter Two Numbers");
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the first number :");
		a = sc.nextInt();
		
		System.out.println("Enter the second number :");
		b = sc.nextInt();
		
		sc.close();
		
		System.out.println("a == b is "+(a==b));
		
		System.out.println("a != b is "+(a!=b));
		
		System.out.println("a < b is "+(a<b));
		
		System.out.println("a > b is "+(a>b));
		
		System.out.println("a >= b is "+(a>=b));
		
		System.out.println("a <= b is "+(a<=b));
		
	}

}
