<<<<<<< HEAD
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number.");
    scanf("%d",&n);
    switch (n)
    {
    case 1:{int a;
        printf("Hello Friends.\n Today is monday.\n So you enter your favourite number\n");
        scanf("%d",&a);
        if(a){
        printf("I hope this day gives you the courage to face life's challenges and emerge victorious.\n");
        }
        break;}
    case 2:{int b;
        printf("Hello Friends.\n Today is tuesday.\n SO you enter your favorite color number.\n In this choice.\n 1.RED\n 2.GREEN\n 3.ORANGE\n");
        scanf("%d",&b);
        if(b==1){
            printf("Color! What a deep and mysterious language,the language of dreams.\n");
        }
        else if(b==2){
            printf("The best color in the whole world is the one that looks good on you.\n");
        }
        else{
            printf("Sorry only 2 choice are available. But I gives good wishes for your exam.");
        }
        break;}
    case 3:{int c;
        printf("Hello Friends.\n Today is wednesday.\n So you enter your birthday date.\n");
        scanf("%d",c);
        if(c){
            printf("Your purpose of our lives is to be Happy.\n");
        }
        break;}
    case 4:{char g;
        printf("Hello Friends.\n Today is thursday.\n So you enter your name's first alphabet.\n");
        scanf("%c",&g);
        if(g){
        printf("Knowing Others is wisdom,knowing yourself is enlightenment.");
        }
        break;}
    case 5:{int d;
        printf("Hello Friends.\n Today is friday.\n So you enter How many best friend in your collage.\n");
        scanf("%d",&d);
        if(d){
            printf("True friends are always together in spirit.\n");
        }
        break;}
    case 6:{int e;
        printf("Hello Friends.\n Today is saturday.\n So you enter How many games you likes.");
        scanf("%d",&e);
        if(e){
        printf("Never let the fear of striking out keep you from plying the game.");
        }
        break;}
    case 7:{int f;
        printf("Hello Friends.\n Today is sunday.\n Enter How many sunday in a year.\n");
        scanf("%d",&f);
        if(f=52){
            printf("Forget about the hectic week and start a new Happy Sunday to you!");
        }
        break;}
    default:{
        printf("Good day.");
        break;}
    }

    return 0;
     
=======
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number.");
    scanf("%d",&n);
    switch (n)
    {
    case 1:{int a;
        printf("Hello Friends.\n Today is monday.\n So you enter your favourite number\n");
        scanf("%d",&a);
        if(a){
        printf("I hope this day gives you the courage to face life's challenges and emerge victorious.\n");
        }
        break;}
    case 2:{int b;
        printf("Hello Friends.\n Today is tuesday.\n SO you enter your favorite color number.\n In this choice.\n 1.RED\n 2.GREEN\n 3.ORANGE\n");
        scanf("%d",&b);
        if(b==1){
            printf("Color! What a deep and mysterious language,the language of dreams.\n");
        }
        else if(b==2){
            printf("The best color in the whole world is the one that looks good on you.\n");
        }
        else{
            printf("Sorry only 2 choice are available. But I gives good wishes for your exam.");
        }
        break;}
    case 3:{int c;
        printf("Hello Friends.\n Today is wednesday.\n So you enter your birthday date.\n");
        scanf("%d",c);
        if(c){
            printf("Your purpose of our lives is to be Happy.\n");
        }
        break;}
    case 4:{char g;
        printf("Hello Friends.\n Today is thursday.\n So you enter your name's first alphabet.\n");
        scanf("%c",&g);
        if(g){
        printf("Knowing Others is wisdom,knowing yourself is enlightenment.");
        }
        break;}
    case 5:{int d;
        printf("Hello Friends.\n Today is friday.\n So you enter How many best friend in your collage.\n");
        scanf("%d",&d);
        if(d){
            printf("True friends are always together in spirit.\n");
        }
        break;}
    case 6:{int e;
        printf("Hello Friends.\n Today is saturday.\n So you enter How many games you likes.");
        scanf("%d",&e);
        if(e){
        printf("Never let the fear of striking out keep you from plying the game.");
        }
        break;}
    case 7:{int f;
        printf("Hello Friends.\n Today is sunday.\n Enter How many sunday in a year.\n");
        scanf("%d",&f);
        if(f=52){
            printf("Forget about the hectic week and start a new Happy Sunday to you!");
        }
        break;}
    default:{
        printf("Good day.");
        break;}
    }

    return 0;
     
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
}