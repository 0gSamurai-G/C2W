import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		char ch=(char)(64+row);
		int count=1;
		for(int i=row;i>0;i--){
		
			for(int j=0;j<row;j++){
			
				if(count%2!=0){
				
					System.out.print(ch+"\t");
				}else{
				
					System.out.print(i+"\t");
				}
				
			}
			count++;
			ch--;
			System.out.println();
		}
	}
}
