import java.util.*;

class Day{

        public static void main(String[] args){
                Scanner scan=new Scanner(System.in);
                System.out.println("Enter day  number:");
                int x=scan.nextInt();

                int i=x;
                while(x>=0){

                        if(x==0){

                        System.out.println("0 days remaining overdue");
                        }else{

                                System.out.println(x+" days remaining");
                        }
                        x--;
                }
        }
}