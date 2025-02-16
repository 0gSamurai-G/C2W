import java.util.*;
class Num{

	public static void main(String[] args){

		System.out.println("Enter a number:");	
		Scanner scan=new Scanner(System.in);
		int x=scan.nextInt();
		if(x>=0){
		
			System.out.println(x+" is positive");
		}else{
		
			System.out.println(x+" is negative");
		}

	}
}
