#include<stdio.h>
struct bank 
{
  char name[50];
  int accno;
  int balance;
};
int l;
void main()
{
    struct bank m[15];
    printf("enter number of coustmers:");
    scanf("%d",&l);
    printf("enter the customer details :");
    for(int i=0;i<l;i++){
        printf("\nenter the name:");
        scanf("%s",&m[i].name);
        printf("enter the account number:");
        scanf("%d",&m[i].accno);
        printf("enter the balance:");
        scanf("%d",&m[i].balance);
    }
    printf("\n1.names of all the coustmers with balance>50000\n2.add 1000 to accounts with balance>10000\n3.withdraw");
    int c;
    void fun (struct bank a[]);
    void add (struct bank a[]);
    void withdraw (struct bank a[]);
    printf("\nenter your choice:");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
    fun(m);
    break;
    case 2:
    add(m);
    break;
    case 3:
    withdraw(m);
    break;
    default:
    printf("invalid choice");
    break;
    }
    
}

void fun (struct bank a[])
{
   for(int i=0;i<l;i++)
    {
        if(a[i].balance>50000)
        {
            printf("%s\n",a[i].name);
        }
    }
}

void add(struct bank a[])
{
     for(int i=0;i<l;i++)
    {
        if(a[i].balance>10000)
        {
            a[i].balance=a[i].balance+1000;
            printf("balance of %s after increament is %d\n",a[i].name,a[i].balance);
        }
    }
}

void withdraw (struct bank a[])
{
   int k,wd;
   printf("enter the account no.:");
   scanf("%d",&k);
   for(int i=0;i<l;i++)
    {
        if(k==a[i].accno)
        {
           printf("enter the withdrawal ammount :");
           scanf("%d",&wd);
           a[i].balance=a[i].balance-wd;
           printf("the amount after withdwal in %d is %d",a[i].accno,a[i].balance);
           break;
        }
    }
}