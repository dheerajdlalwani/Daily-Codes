package JavaLab;
import java.util.Scanner;

public class BasicMathOperations {
	
	public static void main(String[] args)
	{
		int num1, num2, sum, multiplication, Division, Subtraction;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the first Number : ");
		num1 = sc.nextInt();
		System.out.println("Enter the second Number : ");
		num2 = sc.nextInt();
		
		sc.close();
		
		    sum = num1+num2;
	        multiplication = num1*num2;
	        Division = num1/num2;
	        Subtraction = num1-num2;
	        System.out.println("Sum of two numbers is: "+sum);
	        System.out.println("Multiplication of two numbers is: "+multiplication);
	        System.out.println("Division of two numbers is: "+Division);
	        System.out.println("Subtraction of two numbers is: "+Subtraction);
	}
}