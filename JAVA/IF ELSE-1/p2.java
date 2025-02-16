import java.util.*;

class Eod{

	public static void main(String[] args){
	
		System.out.println("Enter a number:");
		Scanner scan=new Scanner(System.in);
		int x=scan.nextInt();
		if(x%2==0){
		
			System.out.println(x+" is an even number");
		}else{
		
			System.out.println(x+" is an odd number");
		}
	}
}
