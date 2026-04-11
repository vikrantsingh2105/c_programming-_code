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