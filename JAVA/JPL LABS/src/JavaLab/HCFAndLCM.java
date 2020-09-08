package JavaLab;
import java.util.Scanner;

public class HCFAndLCM {
	
	public static void main(String[] args)
	{
		int num1,num2,temp,temp1,temp2,hcf,lcm;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("To calculate HCF and LCM");
		System.out.println("Enter the first number :");
		num1 = sc.nextInt();
		System.out.println("Enter the second number :");
		num2 = sc.nextInt();
		sc.close();
		
		temp1=num1;
		temp2=num2;
		
		while (temp2!=0)
		{
			temp=temp2;
			temp2=temp1%temp;
			temp1=temp;
		}
		
		hcf = temp1;
		lcm = (num1*num2)/hcf;
		
		System.out.println("HCF of the numbers is "+hcf);
		System.out.println("LCM of the numbers is "+lcm);
		
	}

}
