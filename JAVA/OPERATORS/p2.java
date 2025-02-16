import java.util.*;

class Rel{

	public static void main(String[] args){
	
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter First number:");
		int x=scan.nextInt();
		System.out.println("Enter Second number:");
		int y=scan.nextInt();

		System.out.println(x+">"+y+" :"+(x>y));
		System.out.println(x+"<"+y+" :"+(x<y));
		System.out.println(x+"=="+y+" :"+(x==y));
		System.out.println(x+"!="+y+" :"+(x!=y));
		System.out.println(x+">="+y+" :"+(x>=y));
		System.out.println(x+"<="+y+" :"+(x<=y));
	}
}
