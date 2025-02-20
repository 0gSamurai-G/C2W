import java.util.*;

class Sub{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Platinum\nGold\nSilver\nBronze\nfree with limit");
                String str=scan.next();
                switch(str){

                        case "Platinum":
                                System.out.println("799");
                                break;
                        case "Gold":
                                System.out.println("599");
                                break;
                        case "Silver":
                                System.out.println("399");
                                break;
                        case "Bronze":
                                System.out.println("199");
                                break;
                        case "Free":
                                System.out.println("Less than 199");
                                break;
                        default:
                                System.out.println("Invalid input");

                }
        }
}