import java.util.*;

class Loss{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Selling price:");
                double sell=scan.nextDouble();

                System.out.println("Cost price:");
                double cost=scan.nextDouble();
                boolean correct=true;
                while(correct){
                        if(cost<0){
                                System.out.println("Renter the cost!");
                                System.out.println("Cost price:");
                                cost=scan.nextDouble();
                        }else{correct=false;}
                }

                double num=sell-cost;
                if(num==0){

                        System.out.println("No profit, no loss");
                }else if(num>0){

                        System.out.println("Profit: "+num);
                }else{

                        System.out.println("Loss: "+num);
                }
        }
}