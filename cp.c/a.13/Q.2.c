# include<stdio.h>
 void addition(){
    int A,n1,n2;
    printf("Enter number.\n");
    scanf("%d%d",&n1,&n2);
    A=n1+n2;
    printf("Result-%d",A);
    }
void subtraction(){
    int S,n1,n2;
    printf("Enter number.\n");
    scanf("%d%d",&n1,&n2);
    S=n1-n2;
    printf("Result-%d",S);
}
void multiplication(){
    int M,n1,n2;
    printf("Enter number.\n");
    scanf("%d%d",&n1,&n2);
    M=n1*n2;
    printf("Result-%d",M);
}
void division(){
    int D,n1,n2;
    printf("Enterr number.\n");
    scanf("%d%d",&n1,&n2);
    D=n1/n2;
    printf("Result-%d",D);
}


 int main()
 {
    int Q;
    printf("Enterr your Quction.\n");
    scanf("%d",&Q);
    switch (Q)
    {
     case 1:{
        addition();
        break;
    }
    case 2:{
        subtraction();
        break;
    }
    case 3:{
        multiplication();
        break;
    }
    case 4:{
        division();
        break;
    }
    default:{
        printf("Exit.");
        break;
    }
    }
    return 0;
    }