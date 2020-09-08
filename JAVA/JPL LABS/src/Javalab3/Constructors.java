package Javalab3;

import java.util.Scanner;

public class Constructors {

    String name, number, s;

    Constructors(String student, String roll, String batch) {
        name = student;
        number = roll;
        s = batch;

        System.out.println("Name of the Student is " + name);
        System.out.println("Roll Number " + number);
        System.out.println("Batch : " + s);

    }

    public static void main(String[] args) {
        String student, roll, batch;
        System.out.println("Enter the credntials");
        System.out.println("Enter your Name");
        Scanner sc = new Scanner(System.in);
        student = sc.nextLine();
        System.out.println("Enter your Roll number");
        roll = sc.nextLine();
        System.out.println("Enter your Batch");
        batch = sc.nextLine();
        System.out.println("---------------------------------------");
        new Constructors(student, roll, batch);
        sc.close();

    }

}
