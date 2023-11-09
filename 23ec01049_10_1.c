#include<stdio.h>
struct student
{
    int rollno ;
    char name[20];
    int age;
};
void main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].rollno=i+1;
       printf("\nEnter the name of the student with roll %d:",i+1);
       scanf("%s",&s[i].name);
       printf("Enter the age of the student:");
       scanf("%d",&s[i].age);
    }
    printf("Details of the student with roll number 2\n");
    printf("roll no.:%d\nname :%s\nage :%d",s[1].rollno,s[1].name,s[1].age);
}