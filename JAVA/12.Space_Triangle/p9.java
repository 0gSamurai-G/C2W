import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows:");
		int row=sc.nextInt();

		int space=0;
		int x=0;

		for(int i=row;i>0;i--){
		
			char ch=(char)(65+x);
			for(int j=0;j<row;j++){
			
				if(j<space){
				
					System.out.print("\t");
				}else{
				
					if(row%2==0){
					
						if(j%2==0){
						
							System.out.print(((int)ch)+"\t");
						}else{
						
							System.out.print(ch+"\t");
						}ch++;
					}else{
					
						if(j%2==0){
						
							System.out.print(ch+"\t");
						}else{
						
							System.out.print(((int)ch)+"\t");
						}ch++;
					}
				}
				
			}space++;
			x++;
			System.out.println();
		}
	}
}
