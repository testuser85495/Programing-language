package greatest_Number;

import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		//double num1;
		//double num2;
		//double num3;
		//double max;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter A Num1: ");
		int num1 = sc.nextInt();
		
		System.out.print("Enter A Num2: ");
		int num2 = sc.nextInt();
		
		System.out.print("Enter A Num3: ");
		int num3 = sc.nextInt();
		
		
		if (num1 >= num2 && num1 >= num3) {
			System.out.println("The greatest number is: " + num1);
		}
		else if (num2 >= num1 && num2 >= num3) {
			System.out.println("The greatest number is: " + num2);
		}
		else {
			System.out.println("The greatest number is: " + num3);
		}
	}

}
