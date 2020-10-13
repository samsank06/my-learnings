#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* head=NULL;


void append()
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("enter node data\n");
    scanf("%d",&temp->data);

    if(head==NULL)
    {
        head=temp;
    }
    else{
        struct node *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        
    }
    printf("\n\n");
}

void prefend()
{
    struct node* temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }

    printf("\n\n");
}

void add_at_specified(int l)
{
    int num=0;
    printf("enter the number after which node to be inserted\n");
    scanf("%d",&num);
       
    if(num==0)
    {
        prefend();
    }
    else if(num>l)
    {
        printf("The linked list currently have %d nodes only\n",l);
    }
    else{
        struct node*temp=NULL;
        temp=(struct node *)malloc(sizeof(struct node));

        printf("Enter a node data\n");
        scanf("%d",&temp->data);
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
        }

        else{

            num--;
            struct node*p, *q;
            p=head;
            while(num--)
            {
                p=p->next;
            }
            q=p->next;
            temp->next=q;
            p->next=temp;
            }
        }
}

int length()
{
    int count=0;
    struct node* temp=head;
    while(temp)
    {
        count++;
        temp=temp->next;
    }

    return count;
    printf("\n\n");
}

void delete_a_node()
{
    int n=0,len=0,i=1;
    len=length();
    printf("Enter a node number to delete\n");
    scanf("%d",&n);
    if(head==NULL)
    {
        printf("linked list is empty\n");
    }

    else if(n>len)
    {
        printf("The linked list currently have only %d nodes \n",len);
    }
    
    else{
        struct node* temp=head, *p,*q;
        while(i<n-1)
        {
            temp=temp->next;
        }
        p=temp->next;
        q=temp->next->next;
        temp->next=q;
        p=NULL;

    }
}

void display(struct node * temp )
{
    printf("The linked list have following data\n");
    while(temp)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}

int main()
{

while(1)
{
    int choice =0,len=0,l=0;
    printf("\nChoose the option to perform a operation on linked list\n");
        printf("1->append\t 2->prefend \t 3->specified_pos\t 4->length\t5->Delete\t 6->Display\t 7->Exit\n\n");
        printf("enter your option\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: append();
                    break;
            case 2: prefend();
                    break;
            case 3: l=length();
                    add_at_specified(l);
                    break;
            case 4: len=length();
                    printf("Length of linked list is %d \n",len);
                    break;
            case 5: delete_a_node();
                    break;
            case 6: display(head);
                    break;
            case 7: exit(1);
                    break;
            default:printf("Invalid Choice\n");
        }
}
}
