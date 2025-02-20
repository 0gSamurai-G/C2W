import java.util.*;

class Sum{

        public static void main(String[] args){
                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a start  number:");
                int x=scan.nextInt();
                System.out.println("Enter a end  number:");
                int y=scan.nextInt();
                int sum=0;
                while(x<=y){

                        sum+=x;
                        x++;
                }System.out.println("sum: "+sum);                                                                                     }                                                                                                                     }