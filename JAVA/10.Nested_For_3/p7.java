import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		char ch=(char)(64+row), che='A', cho=ch;
		int even=1, odd=row;
		for(int i=0;i<row;i++){
		
			even=1;
			odd=row;
			che='A';
			cho=ch;
			for(int j=0;j<row;j++){
			
				if(i%2==0){
				
					System.out.print(even+""+che+"\t");
					even++;
					che++;
				}else{
				
					System.out.print(odd+""+cho+"\t");
					odd--;
					cho--;
				}
			}System.out.println();
		}
	}
}
