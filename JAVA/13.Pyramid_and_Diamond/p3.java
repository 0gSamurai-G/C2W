import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows:");
		int row=sc.nextInt();
		int space,col;
		char ch1,ch2;

		for(int i=1;i<=row;i++){
		
			ch1='A';
			ch2='a';
			space=row-i;
			col=(i*2)-1;
			for(int sp1=1;sp1<=space;sp1++){
			
				System.out.print("\t");
			}
			for(int j=1;j<=col;j++){
			
				if(i%2!=0){
				
					System.out.print(ch1+"\t");
					ch1++;
				}else{
				
					System.out.print(ch2+"\t");
					ch2++;
				}
			}
			for(int sp2=1;sp2<=space;sp2++){
			
				System.out.print("\t");
			}
			System.out.println();
		}
	}
}
