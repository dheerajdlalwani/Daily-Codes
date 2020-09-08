package JavaLab;
import java.util.Scanner;

public class AddingTwoNumberWithScanner {
	
	public static void main(String[] args)
	{
		int num1, num2, sum;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the first Number to be added : ");
		num1 = sc.nextInt();
		System.out.println("Enter the second Number to be added : ");
		num2 = sc.nextInt();
		
		sc.close();
		
		    sum = num1+num2;
	        
	        System.out.println("Addition of two numbers is: "+sum);
	}
}