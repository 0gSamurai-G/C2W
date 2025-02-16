import java.util.*;

class Div7{

	public static void main(String[] args){
	
		System.out.println("Enter a number:");
		Scanner scan=new Scanner(System.in);
		int x=scan.nextInt();
		if(x%7==0){
		
			System.out.println(x+" is divisible by 7");
		}else{
		
			System.out.println(x+" is not divisible by 7");
		}
	}
}
