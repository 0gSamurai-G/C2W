import java.util.*;

class Log{

	public static void main(String[] args){
	
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter First boolean value:");
		boolean x=scan.nextBoolean();
		System.out.println("Enter Second boolean value:");
		boolean y=scan.nextBoolean();

		System.out.println("LOgical AND: "+x+" && "+y+"="+(x&&y));		
		System.out.println("LOgical OR: "+x+" || "+y+"="+(x||y));		
		System.out.println("LOgical NOT for first value: !"+x+"="+(!x));		
		System.out.println("LOgical NOT for second value: !"+y+"="+(!y));		
	}
}
