import java.util.*;

class G10{

	public static void main(String[] args){

		System.out.println("Enter a number:");
		Scanner scan=new Scanner(System.in);
		int x=scan.nextInt();


		if(x==10){
	
			System.out.println(x+" is equal to 10");
		}else if(x>10){
	
			System.out.println(x+" is gretaer than 10");
		}else{
	
			System.out.println(x+" is less than 10");
		}
	}
}
