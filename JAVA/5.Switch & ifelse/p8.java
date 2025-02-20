import java.util.*;

class Pos{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter first number:");
                int num1=scan.nextInt();
                System.out.println("Enter second number:");
                int num2=scan.nextInt();
                int count=0;
                while(num1>=0 && num2>=0){


                        if(num1<0 || num2<0){break;}
                        int num3=num1*num2;
                        if(num3%2==0){

                                count++;
                                num1=-1;
                                num2=-1;

                        }else{}

                switch(count){

                        case 0:                                                                                                                                                                                                                                                                                                              System.out.println("Odd");
                                break;
                        case 1:
                                System.out.println("Even");
                                break;
                        default:
                                System.out.println("Error");
                if(count>=0){break;}
                }
                }
        }
}