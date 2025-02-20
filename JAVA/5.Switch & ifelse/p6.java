import java.util.*;

class Spell{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a number:");
                int ch=scan.nextInt();
                switch(ch){

                        case 1:
                                System.out.println("One");
                                break;
                        case 2:
                                System.out.println("Two");
                                break;
                        case 3:
                                System.out.println("Three");
                                break;
                        case 4:
                                System.out.println("Four");
                                break;
                        case 5:
                                System.out.println("Five");
                                break;
                        case 0:
                                System.out.println("Zero");
                                break;
                        default:
                                System.out.println("Invalid number");
                }
        }
}