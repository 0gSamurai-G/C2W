import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
	
		for(int i=0;i<row;i++){
		
			char ch=(char)(64+row);
			for(int j=1;j<=row;j++){
			
				if(i%2==0){
				
					System.out.print(ch+"\t");
					ch--;
				}else{
				
					System.out.print(j+"\t");
				}
			}System.out.println();
		}
	}
}
