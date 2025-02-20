import java.util.*;

class Tab{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int x=scan.nextInt();
                for(int i=1;i<=10;i++){

                        System.out.println(x+" x "+i+" = "+(x*i));

                }
        }
}