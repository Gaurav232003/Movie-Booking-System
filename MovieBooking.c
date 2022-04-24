#include<stdio.h>
int gold(int n)
{
    int cost=300*n;
    return cost;
}
int silver(int n)
{
    int cost=200*n;
    return cost;
}
int bronze(int n)
{
    int cost=150*n;
    return cost;
}
int food()
{
    int c=0,fcost=0;
    while(c==0)
    {
    printf("\nEnter you choice\n1.Popcorn\n2.Chinese Combo\n3.Nachos\n4.Cold Drink");
    int a;
    scanf("%d",&a);
    printf("\nEnter quantity");
    int q;

    scanf("%d",&q);
    switch(a)
    {
        case 1:
        printf("\n1.Large Popcorn (Rs.200)\n2.Medium Popcorn (Rs150)\n3.Small Popcorn (Rs.100)");
        int size1;
        scanf("%d",&size1);
        if(size1==1)
        fcost+=(200*q);
        else if(size1==2)
        fcost+=(150*q);
        else if(size1 == 3)
        fcost+=(100*q);
        else
        printf("\nInvalid Input");
        printf("\nWould you like to order more?(1 for Yes and 0 for no)");
        int aa1;
        scanf("%d",&aa1);
        if(aa1==1)
        c=0;
        else
        c=1;
        break;
        case 2:
        printf("\n1.Noodles Combo (Rs.200)\n2.Fried Rice Combo (Rs.200)");
        int size2;
        scanf("%d",&size2);
        if(size2==1||size2==2)
        fcost+=(200*q);
        else
        printf("\nInvalid Input");
        printf("\nWould you like to order more?(1 for Yes and 0 for no)");
        int aa2;
        scanf("%d",&aa2);
        if(aa2==1)
        c=0;
        else
        c=1;
        break;
        case 3:
        printf("\n1.Cheese Nachos (Rs.130)\n2.Jalapeonos (Rs.Rs.120)");
        int size3;
        scanf("%d",&size3);
        if(size3==1)
        fcost+=(130*q);
        else if(size3==2)
        fcost+=(120*q);
        else
        printf("\nInvalid Input");
        printf("\nWould you like to order more?(1 for Yes and 0 for no)");
        int aa3;
        scanf("%d",&aa3);
        if(aa3==1)
        c=0;
        else
        c=1;
        break;
        case 4:
        printf("\n1.Coke (Rs.80)\n2.Fanta (Rs.70)\n3.7UP (Rs.70)");
        int size4;
        scanf("%d",&size4);
        if(size4==3||size4==2)
        fcost+=(70*q);
        else if(size4==1)
        fcost+=(80*q);
        else
        printf("\nInvalid Input");
        printf("\nWould you like to order more?(1 for Yes and 0 for no)");
        int aa4;
        scanf("%d",&aa4);
        if(aa4==1)
        c=0;
        else
        c=1;
        break;
    } 
    }
    return fcost;
}
int main()
{
    int choice,fcost=0,cost=0;
    printf("Enter Your seat preference\n1.GOLD - Rs.300 (Last 5 rows)\n2.SILVER - Rs.200 (Middle 5 rows)\n3.BRONZE - Rs.150 (First 5 Rows)");
    scanf("%d",&choice);
    printf("\nEnter number of seats");
    int n;
    scanf("%d",&n);
    switch (choice)
    {
    case 1:
        cost=gold(n);
        printf("\nDo you want to add any food combo?(1 for yes and 0 for no)");
        int ch;
        scanf("%d",&ch);
        if(ch==1)
        fcost=food();
        break;
    case 2:
        cost=silver(n);
        printf("\nDo you want to add any food combo?(1 for yes and 0 for no)");
        int ch2;
        scanf("%d",&ch2);
        if(ch2==1)
        fcost=food();;
        break;
    case 3:
        cost=bronze(n);
        printf("\nDo you want to add any food combo?(1 for yes and 0 for no)");
        int ch3;
        scanf("%d",&ch3);
        if(ch3==1)
        fcost=food();
        break;    
    default:
        printf("Invalid Input");
        break;
    }
    printf("\nYour Total Cost is %d",cost+fcost);

}
