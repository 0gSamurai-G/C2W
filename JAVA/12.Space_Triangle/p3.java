import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows:");
		int row=sc.nextInt();

		int space=row-2;

		//char count =(char)(64+row);
		for(int i=0;i<row;i++){
		
			char count=(char)(64+row-i);
			for(int j=0;j<row;j++){
			
				if(j<=space){
				
					System.out.print("\t");
				}else{
				
					System.out.print(count+"\t");
					count++;
				}
				
			}space--;
			
			System.out.println();
		}
	}
}
