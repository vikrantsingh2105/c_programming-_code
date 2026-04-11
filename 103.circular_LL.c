// program for circular linked list
#include<stdio.h>
#include<stdlib.h>

void append();
int length();
void insert();
void display();
void del();
struct node
{
 int data;
 struct node *link;
};
struct node *tail=NULL;

int main()
{
 printf("WELCOME TO THE LINKED LIST\n");
    int n,i;
    int ch;
    while(1)
    {
    printf("Enter 1 for append node\n");
    printf("Enter 2 for delete node\n");
    printf("Enter 3 for inserting node \n");
    printf("Enter 4 for finding length of linked list\n");
    printf("enter 5 for displaying linked list\n");
    printf("enter 6 for exiting linked list\n");

    printf("Enter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("enter number of times u want to append node");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            append();
        }
        display();
        break;

        case 2 :
        del();
        break;

        case 3 :
        insert();
        break;

        case 4 :
        length();
        break;

        case 5 :
        display();
        break;

        case 6:
        printf("exiting program.....");
        exit(1);

    }
    }
}

void append()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));

 printf("enter the node");
 scanf("%d",&temp->data);
 temp->link=NULL;

 if(tail==NULL)
 {
  tail=temp;
  tail->link=temp;
 }
 else{
  temp->link=tail->link;
  tail->link=temp;
  tail=temp;
 }
}

void display()
{
 struct node *p;
 p=tail->link;
 do
 {
  printf("%d->->",p->data);
  p=p->link;
 }
  while(p!=tail->link);
  printf("\n");
}

int length()
{
  struct node *p;
  int count=0;
  p=tail;
  do
  {
   count++;
   p=p->link;
  } while(p!=tail);
  printf("the length of the list is:%d",count);
  return(count);
}

void insert()
{
 struct node *temp;
 int loc;
 int i=1; 

 temp=(struct node*)malloc(sizeof(struct node));
 printf("enter the new node");
 scanf("%d",&temp->data);
 temp->link=NULL; 

 printf("enter location to insert");
 scanf("%d",&loc); 

 if(loc<=length())
 {
  if(tail==NULL)
  {
   tail=temp;
  }
  else if(loc==1)
  {
    temp->link=tail->link;
    tail->link=temp;
  }
  else
  {
   struct node *p;
   p=tail->link;
   while(i<loc-1)
    {
     p=p->link;
     i++;
    }
    temp->link=p->link;
    p->link=temp;
  }
 }
}

void del()
{
 struct node *p,*q;
 int loc;int i=1;

 printf("enter the location to delete");
 scanf("%d",&loc);

 if(loc<=length())
 {
  if(loc==1) 
  {
   p=tail->link;
   tail->link=p->link;
   p->link=NULL;
   free(p);
  }
  else
  {
  p=tail->link;
  while(i<loc-1)
  {
   p=p->link;
   i++;
  }
  q=p->link;
  p->link=q->link;
  q->link=NULL;
  free(q);
  tail=p;
  }
 }
}