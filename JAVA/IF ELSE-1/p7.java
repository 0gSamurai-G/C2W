import java.util.*;

class Div2_5_10{

	public static void main(String[] args){
	
		System.out.println("Enter a number:");
		Scanner scan=new Scanner(System.in);
		int x=scan.nextInt();
		if(x%2==0 && x%5==0 && x%10==0){
		
			System.out.println(x+" is divisible 2,5 and 10");
		}else{
		
			System.out.println(x+" is not divisible by 2,5 and 10");
		}
	}
}
