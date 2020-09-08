package Javalab3;

import java.util.Scanner;

class Area {
    int l, b, h;

    Area() {
        l = b = h = 0;
    }

    Area(int l, int b) {
        this.l = l;
        this.b = b;

    }

    Area(int l, int b, int h) {
        this.l = l;
        this.b = b;
        this.h = h;

    }

    public int area(int l, int b) {
        return l * b;

    }

    public int area(int l, int b, int h) {
        return l * b * h;
    }
}

public class Overloading {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the values");
        int l, b, h;
        System.out.println("Length ");
        l = sc.nextInt();
        System.out.println("Breadth ");
        b = sc.nextInt();
        System.out.println("Height ");
        h = sc.nextInt();

        Area myBox = new Area();
        System.out.println("Area is = " + myBox.area(l, b));
        System.out.println("Volume is = " + myBox.area(l, b, h));
        Area myCube = new Area();
        System.out.println("Area is = " + myCube.area(l, b));
        System.out.println("Volume is = " + myCube.area(l, b, h));
        sc.close();
    }

}
