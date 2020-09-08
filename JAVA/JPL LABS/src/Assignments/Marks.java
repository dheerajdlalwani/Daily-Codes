package Assignments;

import java.util.Scanner;

public class Marks {

    public static void percentage(int sum, int total) {
        float percentage;
        percentage = (float) (sum * 100) / total;
        System.out.println("Percentage = " + percentage + "%");
    }

    public static void input(int subjects) {
        Scanner subject = new Scanner(System.in);
        int i, sum = 0, total, total1;
        int marks[] = new int[10];
        String name[] = new String[10];
        System.out.println("Enter Max marks for a subject");
        total1 = subject.nextInt();
        total = total1 * subjects;
        for (i = 0; i < subjects; i++) {
            System.out.println("Enter the Name for Subject " + (i + 1));
            name[i] = subject.next();
            System.out.println("Enter the marks obtained in " + name[i]);
            marks[i] = subject.nextInt();
            if (marks[i] > total1) {
                while (marks[i] > total1) {
                    System.out.println("Marks obtained cannot be greater than Max marks in a Subject");
                    System.out.println("Enter Again");
                    marks[i] = subject.nextInt();
                }
            }
        }
        for (i = 0; i < subjects; i++) {
            System.out.println("");
            System.out.print("Marks obtained in " + name[i] + " are = " + marks[i]);
        }
        for (i = 0; i < subjects; i++) {
            sum = sum + marks[i];
        }
        System.out.println("");
        System.out.println("Hence total marks obtained are " + sum + "/" + total);
        percentage(sum, total);
        subject.close();
    }

    public static void main(String[] args) {
        int subjects;
        System.out.println("Enter the number of subjects ");
        Scanner sc = new Scanner(System.in);
        subjects = sc.nextInt();
        input(subjects);
        sc.close();
    }

}
// Make a program to calculate percentage of a given student in exam.
// subjects should be taken as input from keyboard.