import java.util.*;

class Bit{

	public static void main(String[] args){
	
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter First integer value:");
		int x=scan.nextInt();
		System.out.println("Enter Second integer value:");
		int y=scan.nextInt();

		System.out.println("Bitwise AND: "+x+"&"+y+"="+(x&y));			
		System.out.println("Bitwise OR: "+x+"|"+y+"="+(x|y));			
		System.out.println("Bitwise XOR: "+x+"^"+y+"="+(x^y));			
		System.out.println("Bitwise Left shift: "+x+"<<1 ="+(x<<1));		
		System.out.println("Bitwise Right shift: "+x+">>1 ="+(x>>1));				
	}		
}
