import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number:");
		int num=sc.nextInt();
		int count=1;
		for(int i=1;i<=num;i++){
		
			count*=i;
		}
		System.out.println("Factorial of "+num+" is: "+count);
	}
}
