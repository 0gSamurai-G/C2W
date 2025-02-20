import java.util.*;

class Sumo{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int x=scan.nextInt();
                int sum=0;
                for(int i=1;i<=x;i++){

                        if(i%2!=0) sum++;
                }System.out.println("Count: "+sum);
        }
}