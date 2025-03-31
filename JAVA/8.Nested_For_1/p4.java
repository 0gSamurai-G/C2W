import java.util.*;

class Demo{

	public static void main(String[] args){
	
		int count=1;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		for(int i=0;i<row;i++){
		
			for(int j=0;j<row;j++){
			
				System.out.print(count +"\t");
				count++;
			}System.out.println();
		}
	}
}
