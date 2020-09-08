package JavaLab;
import java.util.Scanner;

public class BasicCalculator {

    public static void main(String[] args) {

    	System.out.println("Welecome to the basic calculator");
    	double num1, num2;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first number:");
        
        
        num1 = scanner.nextDouble();
        System.out.print("Enter second number:");
        num2 = scanner.nextDouble();

        System.out.print("Enter an operator (+, -, *, /): ");
        System.out.print("Enter anything else to exit");
        char operator = scanner.next().charAt(0);

        scanner.close();
        double output;

        switch(operator)
        {
            case '+':
            	output = num1 + num2;
                break;

            case '-':
            	output = num1 - num2;
                break;

            case '*':
            	output = num1 * num2;
                break;

            case '/':
            	output = num1 / num2;
                break;

            default:
                System.out.printf("You have entered wrong operator");
                return;
        }

        System.out.println(num1+" "+operator+" "+num2+": "+output);
    }
}