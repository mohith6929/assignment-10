#include<stdio.h>
struct class
{
   int regno ;
   char name[50];
   char branch[50];
   float cgpa;
};

void main()
{
    struct class s[10],temp;
    printf("enter the details of 10 student\n");
    for (int i=0;i<10;i++)
    {
        printf("enter the reg. number:");
        scanf("%d",&s[i].regno);
        printf("enter the name:");
        scanf("%s",&s[i].name);
        printf("enter branch name:");
        scanf("%s",&s[i].branch);
        printf("enter CGPA:");
        scanf("%f",&s[i].cgpa);
    }
    void search (struct class a[]);
    search(s);   
    void arrange (struct class b[],struct class k);
    arrange(s,temp);
}

void search (struct class a[])
{
    int k;
    printf("\n\nenter the registration no. of the student to search : ");
    scanf("%d",&k);
    for(int i=0;i<10;i++)
    {
        if(k==a[i].regno)
        {
          printf("\n\nthe details of the student are :");
          printf("\nREGISTRATION NO.:%d\nNAME:%s\nBRANCH:%s\nCGPA:%f",a[i].regno,a[i].name,a[i].branch,a[i].cgpa);
          break; 
        }
    }
}
void arrange (struct class b[],struct class t)
{
    for(int i=0;i<10;i++)
    {
      for(int j=i+1;j<10;j++){
      if(b[i].regno>b[j].regno)
      {
         t=b[i];
         b[i]=b[j];
         b[j]=t;
      }
      }
    }
    printf("\n\nthe orderd details are : ");
    for(int i=0;i<10;i++)
    {
         printf("\nREGISTRATION NO.:%d\nNAME:%s\nBRANCH:%s\nCGPA:%f",b[i].regno,b[i].name,b[i].branch,b[i].cgpa);
    }

}

