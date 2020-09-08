package JavaLab;
import java.util.Scanner;


public class FloydTriangle {
	
	
	public static void main(String[] args)
	{
		int n, num = 1, i, j;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the number of rows for the floyd's triangle : ");
		n = input.nextInt();
		input.close();
		System.out.println("Floyd's triangle");
		System.out.println("  ");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				System.out.print(num+" ");
				num++;
				
			}
			System.out.println();
		}
}
}