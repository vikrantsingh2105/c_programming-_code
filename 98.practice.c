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
    struct node*link;
};
struct node*ROOT=NULL;

int main()
{
    int ch;
    int n,i;
    printf("WELCOME TO THE LINKED LIST\n");
    while(1){
        printf("enter 1 for appending node:\n");
        printf("enter 2 for deleting node:\n");
        printf("enter 3 for inserting  node at beginning:\n");
        printf("enter 4 for inserting node at location:\n");
        printf("enter 5 for finding length of LL:\n");
        printf("enter 6 for displaying node:\n");
        printf("enter 7 for exiting node:\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter number of times u want to append");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                append();
            }
            display();
            break;

            case 2:
            del();
            break;

            case 3:
            add_begin();
            break;

            case 4:
            insert();
            break;

            case 5:
            length();
            break;

            case 6:
            display();
            break;

            case 7:
            printf("exiting program.....");
            exit(1);
            break;
        }
    }
}

void append()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter value of node u want to append");
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

    printf("enter value of node u want to add at beginning");
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
    int count=1;
    while(p!=NULL)
    {
        count++;
        p=p->link;
    }
    printf("the length of the linked list is %d\n",count);
    return(count);

}

void insert()
{
    struct node*temp;
    int loc;
    int i=1;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter value of node u want to append");
    scanf("%d",&temp->data);
    temp->link=NULL;

    printf("enter location where u want to insert node");
    scanf("%d",&loc);

    if(loc<1 && loc>length())
    {
        printf("out of range");
    }
    else
    {
    if(ROOT==NULL)
    {
        ROOT=temp;
    }
    else if (loc==1)
    {
        temp->link=ROOT;
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
        temp->link = p->link;
        p->link=temp;
    }
    }
}

void del()
{
    int loc;
    int i=1;
    struct node*p;

    printf("enter location of node u want to delete");
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