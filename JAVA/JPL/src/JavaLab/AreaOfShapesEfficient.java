package JavaLab;
import java.util.Scanner;
import java.lang.Math;

public class AreaOfShapesEfficient {
	
	public static void main(String[] args)
	{
		int shape;
		double l,b,h,area;
		
		Scanner sc = new Scanner(System.in);
		
		shape=0;
		
		while(shape!=6)
		{
			System.out.println("Enter an option out of the following to calculate the area of a shape");
			System.out.println("(1)Triangle, (2)Rectangle, (3)Square, (4)Octagon, (5)Trapezoid, (6)Exit");
			shape = sc.nextInt();
			
		switch (shape)
		{
		   case 1 :
			   System.out.println("1.Triangle is chosen");
			   
				System.out.println("Enter the height of the Triangle : ");
				l = sc.nextInt();
				System.out.println("Enter the base of the Triangle : ");
				b = sc.nextInt();
				
				area = (l*b)/2;
				System.out.println("Area of Triangle is = "+area);

		      break; 
		   
		   case 2 :
			    System.out.println("2.Rectangle is chosen");
			    
				System.out.println("Enter the length of the rectangle : ");
				l = sc.nextInt();
				System.out.println("Enter the breadth of the rectangle : ");
				b = sc.nextInt();
				
				area = l*b;
				System.out.println("Area of Rectangle is = "+area);
				
			   
		      break;
		      
		      
		   case 3 :   
			   System.out.println("3.Square is chosen");
			   System.out.println("Enter the side length of the Square : ");
				l = sc.nextInt();
				
				area = l*l;
				System.out.println("Area of Square is = "+area);
				

		      break;
		      
		   case 4 :   
			   System.out.println("4.Octagon is chosen");
			   System.out.println("Enter the side length of the Octagon : ");
				l = sc.nextInt();
				
				area = 2*(1+Math.sqrt(2))*l*l;
				System.out.println("Area of Octagon is = "+area);
				
				
			  break;
			      
		   case 5 :   
			   System.out.println("5.Trapezoid is chosen");
			   System.out.println("Enter the length of the first parallel side of Trapezoid : ");
				l = sc.nextInt();
				System.out.println("Enter the length of the second parallel side of Trapezoid : ");
				b = sc.nextInt();
				System.out.println("Enter the height of the Trapezoid : ");
				h = sc.nextInt();
				
				area = (l+b)*h/2;
				System.out.println("Area of Trapezoid is = "+area);
				
		   case 6 :
			   System.out.println("Exiting the Program");
			   break;      
		   
		   
		   default : 
			   System.out.println("This option is Invalid");
		      
		}
		System.out.println("");
		System.out.println("");
		}
		sc.close();
	}
}
