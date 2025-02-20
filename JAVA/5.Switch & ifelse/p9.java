import java.util.*;

class Mark{

        public static void main(String[] args){

                Scanner scan=new Scanner(System.in);
                System.out.println("Enter marks of maths:");
                int m1=scan.nextInt();
                System.out.println("Enter marks of Physics:");
                int m2=scan.nextInt();
                System.out.println("Enter marks of Chemistry:");
                int m3=scan.nextInt();
                System.out.println("Enter marks of Bio:");
                int m4=scan.nextInt();
                System.out.println("Enter marks of Computer:");
                int m5=scan.nextInt();

                int total=(m1+m2+m3+m4+m5);

                int num;
                if(total>400){

                        num=1;
                }else if(total>350){

                        num=2;
                }else if(total>300){

                        num=3;
                }else if(total>250){

                        num=4;
                }else{num=0;}
                switch(num){

                        case 0:
                                System.out.println("Fail");
                                break;
                        case 1:
                                System.out.println("O grade");
                                break;
                        case 2:
                                System.out.println("A grade");
                                break;
                        case 3:
                                System.out.println("B grade");
                                break;
                        case 4:
                                System.out.println("D grade");
                                break;
                        default:
                                System.out.println("Fail");
                }
        }
}