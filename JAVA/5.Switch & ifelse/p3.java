import java.util.*;

class Size{

        public static void main(String[] args){

                System.out.println("Enter your size:");
                Scanner scan=new Scanner(System.in);
                String ch=scan.next();
                switch(ch){

                        case "S":
                                System.out.println("Small");
                                break;
                        case "M":
                                System.out.println("Medium");
                                break;
                        case "L":
                                System.out.println("Large");
                                break;
                        case "XL":
                                System.out.println("Extra Large");
                                break;
                        default:
                                System.out.println("Invalid Size");
                }
        }
}