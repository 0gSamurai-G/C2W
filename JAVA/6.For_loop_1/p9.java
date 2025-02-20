import java.util.*;

class Sum{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int x=scan.nextInt();
                int sum=0;
                for(int i=1;i<=x;i++){

                        sum+=i;
                }System.out.println("Sum: "+sum);
        }
}