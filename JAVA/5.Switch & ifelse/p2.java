import java.util.*;

class Grade{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter your grade:");
                char ch=scan.next().charAt(0);
                switch(ch){

                        case 'O':
                                System.out.println("Outstanding");
                                break;
                        case 'A':
                                System.out.println("Excellent");
                                break;
                        case 'B':
                                System.out.println("Good");
                                break;
                        case 'C':
                                System.out.println("Fair");
                                break;
                        case 'D':
                                System.out.println("Alright");
                                break;
                        case 'F':
                                System.out.println("Fail");
                                break;
                        default:
                                System.out.println("Invalid Grade");
                }
        }
}