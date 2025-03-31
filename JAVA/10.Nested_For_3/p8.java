import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		int count = 1;
		for(int i=0;i<row;i++){
		
			for(int j=0;j<row;j++){
			
				switch(count){
				
					case 1:{
						       System.out.print("#\t");
						       break;
					}
					case 2:{
					
						       System.out.print("$\t");
						       break;
					}
					default:{
					
							System.out.print("@\t");
							break;
					}
				}
			}
			count++;
			if(count>3) count=1;
			System.out.println();
		}
	}
}
