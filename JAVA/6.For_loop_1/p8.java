import java.util.*;

class Tabr{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int x=scan.nextInt();
                for(int i=10;i>=1;i--){

                        System.out.println(x+" x "+i+" = "+(x*i));

                }
        }
}