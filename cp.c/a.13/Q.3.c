<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int B=200,FF=50,P=500,S=150,C=55,n,O,c,s;
    printf("Welcome.\n Enter number-1 for What do you want.\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Enter your order number & see payment of your order\n");
        printf("1.Burger.\n 2.French Fries.\n 3.Pizza.\n 4.Sandwiches.\n 5.Coldrings.\n");
        scanf("%d",&O);
        switch (O)
        {
        case 1:
            printf("Burger=Rs.%d",B);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=B*c;
            printf("Total charge.%d\n",s);
            break;
        case 2: 
        
            printf("French Fries=Rs.%d",FF);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=FF*c;
            printf("Total charge.%d\n",s);
            break;
        case 3:
            printf("Pizza=Rs.%d",P);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=P*c;
            printf("Total charge.%d\n",s);
            break;
        case 4: 
            printf("Sandwiches=Rs.%d\n",S);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=S*c;
            printf("Total charge.%d\n",s);
            break;
        case 5:
            printf("Coldrings=Rs.%d\n",C);
            printf("Enter Quantity.\n");
            scanf("%d",&c); 
            s=C*c;
            printf("Totel amount %d\n",s);
            break;
        default:
        printf("All choice is fenish.");
            break;
        }
    }
    else{
        printf("exit");
    }
    printf("Thank you.For coming\n");
    return 0;
=======
#include <stdio.h>
int main()
{
    int B=200,FF=50,P=500,S=150,C=55,n,O,c,s;
    printf("Welcome.\n Enter number-1 for What do you want.\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Enter your order number & see payment of your order\n");
        printf("1.Burger.\n 2.French Fries.\n 3.Pizza.\n 4.Sandwiches.\n 5.Coldrings.\n");
        scanf("%d",&O);
        switch (O)
        {
        case 1:
            printf("Burger=Rs.%d",B);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=B*c;
            printf("Total charge.%d\n",s);
            break;
        case 2: 
        
            printf("French Fries=Rs.%d",FF);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=FF*c;
            printf("Total charge.%d\n",s);
            break;
        case 3:
            printf("Pizza=Rs.%d",P);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=P*c;
            printf("Total charge.%d\n",s);
            break;
        case 4: 
            printf("Sandwiches=Rs.%d\n",S);
            printf("Enter Quantity.\n");
            scanf("%d",&c);
            s=S*c;
            printf("Total charge.%d\n",s);
            break;
        case 5:
            printf("Coldrings=Rs.%d\n",C);
            printf("Enter Quantity.\n");
            scanf("%d",&c); 
            s=C*c;
            printf("Totel amount %d\n",s);
            break;
        default:
        printf("All choice is fenish.");
            break;
        }
    }
    else{
        printf("exit");
    }
    printf("Thank you.For coming\n");
    return 0;
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
    }