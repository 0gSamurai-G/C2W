import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number:");
		int num=sc.nextInt();
		int temp=num,dig=0,sum=0;
		while(temp>0){
		
			dig=temp%10;
			if(dig%2==0){
				sum+=dig;
			}
			temp/=10;
		}
		System.out.println("sum even digits: "+sum);
	}
}
