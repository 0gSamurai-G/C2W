import java.util.*;

class Odd{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int x=scan.nextInt();
                for(int i=1;i<=x;i++){

                        if(i%2!=0){
                                System.out.println(i);
                        }
                }
        }
}