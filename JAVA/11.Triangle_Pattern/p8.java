import java.util.*;

class Demo{

	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of rows: ");
		int row = sc.nextInt();
		int count1=1,count2=1;
		for(int i=row;i>0;i--){
		
			count2=count1;
			for(int j=0;j<i;j++){
			
					System.out.print(count2+"\t");
					count2++;
			}System.out.println();
			count1++;
		}
	}
}
