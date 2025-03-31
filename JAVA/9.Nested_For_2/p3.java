import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		int counti=1,counto=1;

		for(int i=0;i<row;i++){
		
			counti=counto;
			for(int j=0;j<row;j++){
			
				System.out.print(counti+"\t");
				counti++;
			}
			counto++;
			System.out.println();
		}
	}
}
