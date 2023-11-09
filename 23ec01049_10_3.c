#include<stdio.h>
#include<string.h>
struct student
{
  int mark[5];
  char name[30];
};
void main()
{
    int s;
    printf("Enter number of students:");
    scanf("%d",&s);
    struct student std[50];
    for (int i=0;i<s;i++){
      printf("\nenter the name of the student:");
      scanf("%s",std[i].name);
      printf("\nEnter the marks of 5 subjects:");
      for (int j=0;j<5;j++){
        scanf("%d",&std[i].mark[j]);
      }
    }
    int l,u=0;
    char nam[30];
    printf("enter  the person's name :");
    scanf("%s",nam);
    for(l=0;l<s;l++)
    {
      if(!strcmp(nam,std[l].name))
      {
        u=1;
         break;
      }
    }
    if(u == 0)
    {
      printf("student not found");
    }
    else
    {
       int total=0;
       for (int i=0;i<5;i++)
       {
         total=total+std[l].mark[i];
       }
       printf("the total mark of %s is %d",std[l].name,total);
       float average=(total/5);
       printf("\naverage of the marks is %f",average);
    }

}