import java.util.*;

class Dig3{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int x=scan.nextInt();
                int y=100;
                for(int i=0;i<x;i++){

                        System.out.println(y++);
                }
        }
}