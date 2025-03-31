import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
	
		for(int i=0;i<row;i++){
		
			char ch=(char)(64+row), ch1='A';
			int count=row;
			for(int j=1;j<=row;j++){
			
				if(i%2==0){
				
					if(j%2!=0){
					
						System.out.print(ch+"\t");
					}else{
					
						System.out.print(count+"\t");
					}
					ch--;
					count--;
				}else{
				
					if(j%2!=0){
					
						System.out.print(ch1+"\t");
					}else{
					
						System.out.print(j+"\t");
					}
					ch1++;
				}
			}System.out.println();
		}
	}
}
