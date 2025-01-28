include<stdio.h>
#include<stdlib.h>

int end(){

        char ch;
        printf("\nDo you want to continue (y/n):\n");
        getchar();
        scanf("%c",&ch);
        printf("\n");
        if(ch=='n' || ch=='N'){

                return 0;
        }else{return 1;}
}

int* prime(int* arr1,int size1){

        int index1=0,index2=0,size2=1,flag=1;
        int* arr3=malloc(sizeof(int));
        while(index1<size1){

                flag=1;
                for(int i=2;((i<arr1[index1])&&(arr1[index1]>1));i++){

                        if(arr1[index1]%i==0){

                                flag=0;
                                break;
                        }
                }if(flag==1 && arr1[index1]>1){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}


int* composite(int* arr1,int size1){

        int index1=0,index2=0,size2=1,flag=1;
        int* arr3=malloc(size2*sizeof(int));
        while(index1<size1){

                flag=0;
                for(int i=2;i<arr1[index1];i++){

                        if(arr1[index1]%i==0){

                                flag=1;
                                break;
                        }
                }if(flag==1 && arr1[index1]>1){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* strong(int* arr1,int size1){

        int index1=0,index2=0,size2=1,flag=1;
        int* arr3=malloc(sizeof(int));
        while(index1<size1){

                int fact,sum=0;
                int temp=arr1[index1];
                while(temp>0){

                        fact=1;
                        int dig=temp%10;

                        for(int i=2;i<=dig;i++){

                                fact*=i;
                        }sum+=fact;
                        temp/=10;
                }if(sum==arr1[index1]){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* armstrong(int* arr1,int size1){

        int index1=0,index2=0,size2=1,flag=1;
        int* arr3=malloc(sizeof(int));
        while(index1<size1){

                int sum=0,count=0;
                int temp=arr1[index1];
                while(temp>0){

                        count++;
                        temp/=10;

                }temp=arr1[index1];
                while(temp>0){

                        int dig=temp%10;
                        int num1=dig;
                        for(int i=0;i<count-1;i++){

                                num1*=dig;
                        }sum+=num1;
                        temp/=10;
                }
                if(sum==arr1[index1]){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* perfect(int* arr1,int size1){

        int index1=0,index2=0,size2=1;
        int* arr3=malloc(size2*sizeof(int));
        while(index1<size1){

                int sum=0;
                for(int i=1;i<arr1[index1];i++){

                        if(arr1[index1]%i==0){

                                sum+=i;
                        }
                }if(sum==arr1[index1]){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* efficient(int* arr1,int size1){//Abundant

        int index1=0,index2=0,size2=1;
        int* arr3=malloc(size2*sizeof(int));
        while(index1<size1){

                int sum=0;
                for(int i=1;i<=arr1[index1];i++){

                        if(arr1[index1]%i==0){

                                sum+=i;
                        }
                }if(sum>(2*arr1[index1])){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* deficient(int* arr1,int size1){

        int index1=0,index2=0,size2=1;
        int* arr3=malloc(size2*sizeof(int));
        while(index1<size1){

                int sum=0;
                for(int i=1;i<arr1[index1];i++){

                        if(arr1[index1]%i==0){

                                sum+=i;
                        }
                }if(sum<arr1[index1]){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* palindrome(int* arr1,int size1){

        int index1=0,index2=0,size2=1,flag=1;
        int* arr3=malloc(sizeof(int));
        while(index1<size1){

                int sum=0;
                int temp=arr1[index1];
                while(temp>0){

                        sum=(sum*10)+(temp%10);
                        temp/=10;

                }if(sum==arr1[index1]){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* palindromic_prime(int* arr1,int size1){

        int index1=0,index2=0,size2=1,flag=1;
        int* arr3=malloc(sizeof(int));
        while(index1<size1){

                flag=1;
                int flag1=0;
                for(int i=2;((i<arr1[index1])&&(arr1[index1]>1));i++){

                        if(arr1[index1]%i==0){

                                flag=0;
                                break;
                        }
                }int temp=arr1[index1],sum=0;
                while(temp>0){

                        sum=(sum*10)+(temp%10);
                        temp/=10;
                }if(sum==arr1[index1]) flag1=1;
                if(flag==1 && arr1[index1]>1 && flag1==1){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* harshad(int* arr1,int size1){

        int index1=0,index2=0,size2=1;
        int* arr3=malloc(size2*sizeof(int));
        while(index1<size1){

                int sum=0,temp=arr1[index1];
                while(temp>0){

                        sum+=temp%10;
                        temp/=10;
                }
                if(arr1[index1]%sum==0){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* automorphic(int* arr1,int size1){

        int index1=0,index2=0,size2=1;
        int* arr3=malloc(size2*sizeof(int));
        while(index1<size1){

                if(arr1[index1]%10==((arr1[index1])*(arr1[index1])%10)){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int* happy(int* arr1,int size1){

        int index1=0,index2=0,size2=1;
        int* arr3=malloc(size2*sizeof(int));
        while(index1<size1){

                int temp=arr1[index1],flag=1;

                if(){

                        arr3[index2]=arr1[index1];
                        index2++;
                        size2++;
                        arr3=realloc(arr3,size2*sizeof(int));
                }index1++;
        }arr3[index2]=-999;
        return arr3;
}

int main(){

        int size1,flag1=1,opt;
        printf("Enter the size of array:\n");
        scanf("%d",&size1);
        int* arr1=calloc(size1,sizeof(int));
        printf("Enter the elements of array:\n");
        for(int i=0;i<size1;i++){

                scanf("%d",&arr1[i]);
        }
        while(flag1){

                printf("\nSelect an option:\n");
                printf("1.Prime number\n");
                printf("2.Composite number\n");
                printf("3.Strong number\n");
                printf("4.Armstrong number\n");
                printf("5.Perfect number\n");
                printf("6.Efficent/Abundant number\n");
                printf("7.Deficient number\n");
                printf("8.Palindrome number\n");
                printf("9.Palindromic prime number\n");
                printf("10.Harshad number\n");
                printf("11.Automorphic number\n");
                printf("12.Happy number\n");
                printf("Your option:\n");
                scanf("%d",&opt);
                switch(opt){

                        case 1:
                                int index1=0;
                                int* arr2=prime(arr1,size1);
                                printf("Prime numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 2:
                                index1=0;
                                arr2=composite(arr1,size1);
                                printf("Composite numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;


                        case 3:
                                index1=0;
                                arr2=strong(arr1,size1);
                                printf("Strong numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 4:
                                index1=0;
                                arr2=armstrong(arr1,size1);
                                printf("Armstrong numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 5:
                                index1=0;
                                arr2=perfect(arr1,size1);
                                printf("Perfect numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 6:
                                index1=0;
                                arr2=efficient(arr1,size1);
                                printf("Efficient/Abundant numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 7:
                                index1=0;
                                arr2=deficient(arr1,size1);
                                printf("Deficient numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;
                        case 8:
                                index1=0;
                                arr2=palindrome(arr1,size1);
                                printf("Palindrome numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;
                        case 9:
                                index1=0;
                                arr2=palindromic_prime(arr1,size1);
                                printf("Palindromic prime numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 10:
                                index1=0;
                                arr2=harshad(arr1,size1);
                                printf("Harshad numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 11:
                                index1=0;
                                arr2=automorphic(arr1,size1);
                                printf("Automorphic numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

                        case 12:
                                index1=0;
                                arr2=happy(arr1,size1);
                                printf("Happy numbers:\n");
                                while(arr2[index1]!=-999){

                                        printf("|%d|",arr2[index1]);
                                        index1++;
                                }free(arr2);
                                flag1=end();
                                break;

            }
        }
        return 0;

}