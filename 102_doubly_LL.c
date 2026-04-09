#include<stdio.h>
#include<stdlib.h>

void append();
void add_begin();
int length();
void insert();
void del();
void display();
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*ROOT=NULL;

int main()
{
    printf("WELCOME TO THE LINKED LIST\n");
    int n,i;
    int ch;
    while(1)
    {
    printf("Enter 1 for append node\n");
    printf("Enter 2 for delete node\n");
    printf("Enter 3 for inserting node at beginning\n");
    printf("Enter 4 for inserting node at specific location\n");
    printf("Enter 5 for finding length of linked list\n");
    printf("enter 6 for displaying linked list\n");
    printf("enter 7 for exiting linked list\n");

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
        add_begin();
        break;

        case 4 :
        insert();
        break;

        case 5 :
        length();
        break;

        case 6 :
        display();
        break;

        case 7:
        printf("exiting program.....");
        exit(1);

    }
    }
}


void append()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter node value u want to append");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(ROOT==NULL)
    {
        ROOT=temp;
    }
    else{
        struct node*p;
        p=ROOT;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

void add_begin()
{
   struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter node value u want to add at beginning");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(ROOT==NULL)
    {
        ROOT=temp;
    }
    else{
        temp->link=ROOT;
        ROOT=temp;
    } 
}

int length()
{
    struct node *p;
    int count=0;
    p=ROOT;
    while(p!=NULL)
    {
        count++;
        p=p->link;
    }
    printf("THE LENGTH OF THE LINKED LIST IS %d",count);
    return (count);
}

void insert()
{
   struct node*temp;
   int loc;
   int i=1;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter node value u want to insert");
    scanf("%d",&temp->data);
    temp->link=NULL;

    printf("enter location where u want to insert");
    scanf("%d",&loc);

    if(loc<1 && loc>length())
    {
        printf("out of range");
    }
    else{
    if(ROOT==NULL)
    {
        ROOT=temp;
    }
    else{
        struct node*p;
        p=ROOT;
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
    int loc;
    int i=1;
    struct node*p;

    printf("enter loc of the node u want to delete");
    scanf("%d",&loc);

    if(loc<=length())
    {
        if(loc==1)
        {
            p=ROOT;
            ROOT=ROOT->link;
            p->link=NULL;
            free(p);
        }
        else
        {
            struct node*p,*q;
            p=ROOT;
            while(i<loc-1)
            {
                p=p->link;
                i++;
            }
            q=p->link;
            p->link=q->link;
            q->link=NULL;
            free(q);
        }
    }
}

void display()
{
    struct node *p;
    p=ROOT;
    while(p!=NULL)
    {
        printf("%d->->",p->data);
        p=p->link;
    }
    printf("\n");
}