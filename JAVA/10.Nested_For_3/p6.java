import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		char ch=(char)(64+row);
		char che=ch, cho='A';

		for(int i=0;i<row;i++){
		
			che=ch;
			cho='A';
			for(int j=0;j<row;j++){
			
				if(i%2==0){
				
					System.out.print(che+"\t");
					che--;
				}else{
				
					System.out.print(cho+"\t");
					cho++;
				}
			}System.out.println();
		}
	}
}
