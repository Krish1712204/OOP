import java.util.Scanner;

public class Employee{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter basic pay:");
        double basicPay = scanner.nextDouble();

    
        double hra = 0.1 * basicPay;
        double ta = 0.05 * basicPay;

        double grossSalary = basicPay + hra + ta;

        double professionalTax = 0.02 * grossSalary;

        double netSalary = grossSalary - professionalTax;

        // Display salary breakdown
        System.out.println("Salary Breakdown:");
        System.out.println("Basic Pay: " + basicPay);
        System.out.println("HRA: " + hra);
        System.out.println("TA: " + ta);
        System.out.println("Gross Salary: " + grossSalary);
        System.out.println("Professional Tax: " + professionalTax);
        System.out.println("Net Salary: " + netSalary);
    }
}