import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		int count=1;
		for(int i=0;i<row;i++){
		
			for(int j=0;j<row;j++){
			
				if(count%2!=0){
				
					System.out.print((count*count*count)+"\t");
				}else{
				
					System.out.print((count*count)+"\t");
				}count++;
			}System.out.println();
		}
	}
}
