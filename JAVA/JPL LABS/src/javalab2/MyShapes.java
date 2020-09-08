package javalab2;

import java.util.Scanner;
import java.lang.Math;

class Rectangle {
	double length, breadth, area;

	void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the length of the Rectangle");
		length = sc.nextInt();
		System.out.println("Enter the breadth of the Rectangle");
		breadth = sc.nextInt();
	}

	void calculate() {
		area = length * breadth;
		System.out.println("Area of the Rectangle is " + area);
	}

}

class Triangle {
	double length, breadth, area;

	void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the height of the Triangle");
		length = sc.nextInt();
		System.out.println("Enter the base of the Triangle");
		breadth = sc.nextInt();
	}

	void calculate() {
		area = length * breadth / 2;
		System.out.println("Area of the Triangle is " + area);
	}

}

class Square {
	double length, area;

	void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the side of the Square");
		length = sc.nextInt();
	}

	void calculate() {
		area = length * length;
		System.out.println("Area of the Square is " + area);
	}
}

class Octagon {
	double length, area;

	void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the side of the Octagon");
		length = sc.nextInt();
	}

	void calculate() {
		area = 2 * (1 + Math.sqrt(2)) * length * length;
		System.out.println("Area of the Octagon is " + area);
	}
}

class Trapezoid {
	double length, breadth, height, area;

	void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the length of the first parallel side of Trapezoid : ");
		length = sc.nextInt();
		System.out.println("Enter the length of the second parallel side of Trapezoid : ");
		breadth = sc.nextInt();
		System.out.println("Enter the height of the Trapezoid : ");
		height = sc.nextInt();
	}

	void calculate() {
		area = (length + breadth) * height / 2;
		System.out.println("Area of the Trapezoid is " + area);
	}
}

public class MyShapes {
	public static void main(String[] args) {
		int shape;
		Scanner sc = new Scanner(System.in);
		shape = 0;
		while (shape != 6) {
			System.out.println("Enter an option out of the following to calculate the area of a shape");
			System.out.println("(1)Triangle, (2)Rectangle, (3)Square, (4)Octagon, (5)Trapezoid, (6)Exit");
			shape = sc.nextInt();
			switch (shape) {
				case 1:
					System.out.println("1.Triangle is chosen");
					Triangle t = new Triangle();
					t.input();
					t.calculate();
					break;

				case 2:
					System.out.println("2.Rectangle is chosen");
					Rectangle r = new Rectangle();
					r.input();
					r.calculate();
					break;

				case 3:
					System.out.println("3.Square is chosen");
					Square s = new Square();
					s.input();
					s.calculate();
					break;

				case 4:
					System.out.println("4.Octagon is chosen");
					Octagon o = new Octagon();
					o.input();
					o.calculate();
					break;

				case 5:
					System.out.println("5.Trapezoid is chosen");
					Trapezoid tr = new Trapezoid();
					tr.input();
					tr.calculate();
					break;

				case 6:
					System.out.println("Exiting the Program");
					break;

				default:
					System.out.println("This option is Invalid");
					break;

			}
		}
		System.out.println("");
		System.out.println("");
		sc.close();
	}

}