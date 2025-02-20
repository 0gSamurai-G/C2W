import java.util.*;

class Traffic{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter a colour:");
                String str=scan.next();
                switch(str){

                        case "Red":
                                {

                                        System.out.println("Stop!");
                                        break;
                                }
                        case "Green":
                                {

                                        System.out.println("Go!");
                                        break;
                                }
                        case "Yellow":
                                {

                                        System.out.println("Ready!");
                                        break;
                                }
                        default:
                                System.out.println("Not a colour from traffic light");
                }
        }
}