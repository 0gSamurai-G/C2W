import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number:");
		int num=sc.nextInt();
		int temp=num,dig=0,sum=0;
		
		while(temp>0){
		
			dig=temp%10;
			sum=(sum*10)+dig;
			temp/=10;
		}
		if(sum==num){
		
			System.out.println(num+" is a palindrome number");
		}else{
		
			System.out.println(num+" is not a palindrome number");
		}
	}
}
