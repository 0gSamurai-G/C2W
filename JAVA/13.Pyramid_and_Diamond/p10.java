import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows:");
		int row1=sc.nextInt();
		int space,row=(row1*2)-1;
		int col=0;
		char ch=(char)(63+row1);
		
		for(int i=1;i<=row;i++){
		
			if(i<=row1){
			
				space=row1-i;
				col=(i*2)-1;
				ch++;
			}else{
			
				space=i-row1;
				col=col-2;
				ch--;
			}
			for(int sp1=1;sp1<=space;sp1++){
			
				System.out.print("\t");
			}
			for(int j=1;j<=col;j++){
			
				System.out.print(ch+"\t");
			}
			/*for(int sp2=1;sp2<=space;sp2++){
			
				System.out.print("\t");
			}*/
			System.out.println();
		}
	}
}
