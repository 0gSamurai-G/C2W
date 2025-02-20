import java.util.*;

class Num10{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int x=scan.nextInt();
                int y=100,i=1;
                while(i<=x){

                        System.out.println(y++);
                        i++;
                }
        }
}