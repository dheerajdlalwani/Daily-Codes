package JavaLab;
import java.util.Scanner;
import java.lang.Math;

public class AreaOfShapes {
	
	public static void triangle(int p, int q)
	{
		double area;
		area = 1/2*(p*q);
		System.out.println("Area of Triangle is = "+area);
	}
	
	public static void rectangle(int p, int q)
	{
		double area;
		area = p*q;
		System.out.println("Area of Rectangle is = "+area);
	}
	
	
	public static void square(int p)
	{
		double area;
		area = p*p;
		System.out.println("Area of Square is = "+area);
	}
	
	public static void octagon(int p)
	{
		double area;
		area = 2*(1+Math.sqrt(2))*p*p;
		System.out.println("Area of Octagon is = "+area);
	}
	
	public static void trapezoid(int p, int q, int r)
	{
		double area;
		area = (p+q)*r/2;
		System.out.println("Area of Rectangle is = "+area);
	}
	
	public static void main(String[] args)
	{
		int shape,l,b,h;
		System.out.println("Enter an option out of the following to calculate the area of a shape");
		System.out.println("1.Triangle, 2.Rectangle, 3.Square, 4.Octagon, 5.Trapezoid");
		
		Scanner sc = new Scanner(System.in);
		shape = sc.nextInt();
		
		
		
		
		switch (shape)
		{
		   case 1 :
			   System.out.println("1.Triangle is chosen");
			   
				System.out.println("Enter the height of the Triangle : ");
				l = sc.nextInt();
				System.out.println("Enter the base of the Triangle : ");
				b = sc.nextInt();
				
				triangle(l,b);

		      break; 
		   
		   case 2 :
			    System.out.println("2.Rectangle is chosen");
			    
				System.out.println("Enter the length of the rectangle : ");
				l = sc.nextInt();
				System.out.println("Enter the breadth of the rectangle : ");
				b = sc.nextInt();
				
				rectangle(l,b);
			   
		      break;
		      
		      
		   case 3 :   
			   System.out.println("3.Square is chosen");
			   System.out.println("Enter the side length of the Square : ");
				l = sc.nextInt();
				
				square(l);

		      break;
		      
		   case 4 :   
			   System.out.println("4.Octagon is chosen");
			   System.out.println("Enter the side length of the Octagon : ");
				l = sc.nextInt();
				
				octagon(l);
				
			  break;
			      
		   case 5 :   
			   System.out.println("5.Trapezoid is chosen");
			   System.out.println("Enter the length of the first parallel side of Trapezoid : ");
				l = sc.nextInt();
				System.out.println("Enter the length of the second parallel side of Trapezoid : ");
				b = sc.nextInt();
				System.out.println("Enter the height of the Trapezoid : ");
				h = sc.nextInt();
				
				trapezoid(l,b,h);

			   break;      
		   
		   
		   default : 
		      
		}
		sc.close();
	}
}
