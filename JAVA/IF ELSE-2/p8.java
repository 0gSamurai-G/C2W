import java.util.*;

class Marks{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter your marks:");
                double mark=scan.nextDouble();
                if(mark>=75){

                        System.out.println("First class");
                }else if(mark>=60){

                        System.out.println("Second class");
                }else if(mark>=35){

                        System.out.println("Pass");
                }else{

                        System.out.println("Fail");
                }
        }
}