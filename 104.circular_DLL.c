//code for circular doubly linked list
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
struct node*tail=NULL;

int main()
{
    printf("WELCOME TO THE DOUBLY LINKED LIST\n");
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
    temp->left=NULL;
    temp->right=NULL;

    if(tail==NULL)
    {
        tail=temp;
        tail->right=temp;
        tail->left=temp;
    }
    else{
        temp->right=tail->right;
        temp->left=tail;
        tail->right->left=temp;
        tail->right=temp;
        tail=temp;
    }
}

void add_begin()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter node value u want to add at beginning");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;

    if(tail==NULL)
    {
        tail=temp;
        tail->right=temp;
        tail->left=temp;
    }
    else{
        temp->right=tail->right;
        temp->left=tail;
        tail->right->left=temp;
        tail->right=temp;
    } 
}

int length()
{
    struct node *p;
    int count=0;
    p=tail->right;
    do
    {
        count++;
        p=p->right;
    }
    while(p!=tail->right);
    printf("THE LENGTH OF THE LINKED LIST IS %d\n",count);
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
    temp->left=NULL;
    temp->right=NULL;

    printf("enter at which location u want to insert");
    scanf("%d",&loc);

    if(loc==1)
    {
        temp->right=tail->right;
        temp->left=tail;
        tail->right->left=temp;
        tail->right=temp;
    }
    else if(tail==NULL)
    {
        tail=temp;
        tail->right=temp;
        tail->left=temp;
    }
    else
    {
        struct node*p,*q;
        p=tail->right;
        while(i<loc-1)
        {
            p=p->right;
            i++;
        }
        q=p->right;
        temp->right=p->right;
        q->left=temp;
        p->right=temp;
        temp->left=p;
    }
}

void del()
{
    int loc;
    int i=1;
    struct node*p,*q;

    printf("enter loc of the node u want to delete");
    scanf("%d",&loc);

    if(loc<=length())
    {
        if(loc==1)
        {
            p=tail->right;
            q=p->right;
            tail->right=p->right;
            q->left=tail;
            p->right=NULL;
            p->left=NULL;
            free(p);
        }
        else if(loc==length())
        {
           p=tail->right;
            while(i<loc-1)
            {
                p=p->right;
                i++;
            }
            q=p->right;
            p->right=q->right;
            tail->right=p;
            tail=p;
            q->left=NULL;
            q->right=NULL;
            free(q); 
        }
        else
        {
            struct node*r;
            p=tail->right;
            while(i<loc-1)
            {
                p=p->right;
                i++;
            }
            q=p->right;
            r=q->right;
            r->left=p;
            p->right=r;
            q->left=NULL;
            q->right=NULL;
            free(q);
        }
    }
    else{
        printf("linked list is out of index\n");
    }
}

void display()
{
    struct node *p;
    p=tail->right;
    do
    {
        printf("<-<-%d->->",p->data);
        p=p->right;
    }
    while(p!=tail->right);
    printf("\n");
}