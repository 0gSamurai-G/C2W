import java.util.*;

class Pytha{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter first number:");
                int num1=scan.nextInt();
                System.out.println("Enter second number:");
                int num2=scan.nextInt();
                System.out.println("Enter third number:");
                int num3=scan.nextInt();

                int max;
                if(num1>num2 && num1>num3){

                        max=num1;
                        if(num1*num1 == (num2*num2)+(num3*num3)){

                                System.out.println("Numbers are pythagorean triplet");
                        }else{

                                System.out.println("Numbers are not Pythagorean triplet");
                        }
                }else if(num2>num3){

                        max=num2;
                        if(num2*num2 == (num1*num1)+(num3*num3)){

                                System.out.println("Numbers are pythagorean triplet");
                        }else{

                                System.out.println("Numbers are not Pythagorean triplet");
                        }
                }else{

                        max=num3;
                        if(num3*num3 == (num1*num1)+(num2*num2)){

                                System.out.println("Numbers are pythagorean triplet");
                        }else{

                                System.out.println("Numbers are not Pythagorean triplet");
                        }
                }
        }
}