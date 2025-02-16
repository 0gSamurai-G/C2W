import java.util.*;

class Max{

	public static void main(String[] args){
	
		System.out.println("Enter num1:");
		Scanner scan=new Scanner(System.in);
		int x=scan.nextInt();
		System.out.println("Enter num2:");
		int y=scan.nextInt();
		if(x>y){
		
			System.out.println(x+" is greater than "+y);
		}else{
		
			System.out.println(y+" is greater than "+x);
		}
	}
}
