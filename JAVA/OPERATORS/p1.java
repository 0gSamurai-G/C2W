import java.util.*;
class Calc{

	public static void main(String[] args){
	
		Scanner scan1=new Scanner(System.in);
		System.out.println("Enter first number:");
		int x=scan1.nextInt();
		System.out.println("Enter second number:");
		int y=scan1.nextInt();

		System.out.println("Addition: " + x +"+" + y + "=" + (x+y));
		System.out.println("Subtraction: " + x+ "-" + y + "=" + (x-y));
		System.out.println("Multiplication: " + x+ "*" + y + "=" + x*y);
		System.out.println("Division: " + x +"/" + y + "=" + x/y);
	}
}
