import java.util.*;

class Sqrr{

        public static void main(String[] args){                                                                                       
                Scanner scan=new Scanner(System.in);
                System.out.println("Enter start  number:");
                int x=scan.nextInt();

                int i=x;
                while(x>=1){

                        System.out.println(x*x);
                        x--;
                }
        }
}