import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
	
		for(int i=row;i>0;i--){
		
			for(int j=0;j<i;j++){
			
					System.out.print(i+"\t");
			}System.out.println();
		}
	}
}
