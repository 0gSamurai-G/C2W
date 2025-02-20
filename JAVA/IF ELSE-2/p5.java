import java.util.*;

class Div6{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a floating number:");
                double num=scan.nextDouble();
                if(num%(double)6==0){

                        System.out.println(num+" is divisible by 6");
                }else{

                        System.out.println(num+" is not divisible by 6");
                }
        }
}