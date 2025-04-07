import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows:");
		int row=sc.nextInt();

		int space=0;

		for(int i=row;i>0;i--){
		
			for(int j=0;j<row;j++){
			
				if(j<space){
				
					System.out.print("\t");
				}else{
				
					System.out.print(i+"\t");
				}
				
			}space++;
			System.out.println();
		}
	}
}
