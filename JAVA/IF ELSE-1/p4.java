import java.util.*;

class Char{

	public static void main(String[] args){
	
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a charcter:");
		char ch=scan.next().charAt(0);
		if(ch>=65 && ch<=90){
		
			System.out.println(ch+" is a UPPERCASE character");
		}else if(ch>=97 && ch<=122){
		
			System.out.println(ch+" is a lowercase character");
		}else{
		
			System.out.println(ch+" is not an alphabet");
		}
	}
}
