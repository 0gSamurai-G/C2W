import java.util.*;

class Calc{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter first number:");
                int num1=scan.nextInt();

                System.out.println("Enter second number:");
                int num2=scan.nextInt();

                System.out.println("Select an option:\n1.+\n2.-\n3.*\n4.\n5.%");
                char ch=scan.next().charAt(0);
                switch(ch){

                        case '+':
                                System.out.println("Addition: "+(num1+num2));
                                break;
                        case '-':
                                System.out.println("Subtraction: "+(num1-num2));
                                break;
                        case '*':
                                System.out.println("Multiplication: "+(num1*num2));
                                break;
                        case '/':
                                System.out.println("Division: "+(num1/num2));
                                break;
                        case '%':
                                System.out.println("Modulus: "+(num1%num2));
                                break;                                                                                                                                                                                                                                   default:
                                System.out.println("Invalid Operator");
                }

        }}