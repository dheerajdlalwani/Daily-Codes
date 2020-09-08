package Javalab3;

public class Chaining {
    Chaining() {
        // calls constructor 2
        this(5);
        System.out.println("This is the Default constructor");
    }

    // parameterized constructor 2
    Chaining(int x) {
        // calls constructor 3
        this(5, 10);
        System.out.println(x);
    }

    // parameterized constructor 3
    Chaining(int x, int y) {
        System.out.println("Multiplication of two numbers " + x + " and " + y + " is = " + x * y);
    }

    public static void main(String args[]) {
        // invokes default constructor first
        System.out.println("Constructor chaining program is executed");
        new Chaining();
    }

}
