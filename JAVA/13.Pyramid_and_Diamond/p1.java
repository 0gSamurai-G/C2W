import java.util.*;

class Demo{

        public static void main(String[] args){

                Scanner sc = new Scanner(System.in);
                System.out.println("Enter no. of rows:");
                int row=sc.nextInt();
                int space,col;

                for(int i=1;i<=row;i++){

                        space=row-i;
                        col=(i*2)-1;
                        for(int sp1=1;sp1<=space;sp1++){

                                System.out.print("\t");
                        }
                        for(int j=1;j<=col;j++){

                                System.out.print("1\t");
                        }
                        for(int sp2=1;sp2<=space;sp2++){

                                System.out.print("\t");
                        }
                        System.out.println();
                }
        }
}
