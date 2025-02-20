import java.util.*;

class Mod47{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter start  number:");
                int x=scan.nextInt();
                System.out.println("Enter end number:");
                int y=scan.nextInt();

                int i=1;
                while(x<=y){

                        if(x%4==0 || x%7==0){
                                System.out.println(x);
                        }
                        x++;
                }
        }                                                                                                                                    }