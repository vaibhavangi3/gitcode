#include<iostream>
using namespace std;
struct node{
    int data;
    node *prev,*next;

}*head, *last;

void createlist(int n);
void printlistbeg();
void insertatbeg(int n);
void insertatend(int n);
void printlistend();
int main()
{
    int n;
    head=NULL;
    last=NULL;
    cout<<"Enter the no of nodes"<<endl;
    cin>>n;
    createlist(n);
    int x;
    cout<<"Enter your choice for insertion"<<endl;
    cout<<"Enter 1. to insert at beg"<<endl;
    cout<<"Enter 2. to insert at end"<<endl;
    cin>>x;
    if(x==1)
    {

        cout<<"insertion at beg... started........."<<endl;
        insertatbeg(n);
    }
    else
    {

        cout<<"insertion at end... started........."<<endl;
        insertatend(n);
    }

    cout<<"List created.... Successfully"<<endl;
    int choice;
    cout<<"Enter your choice "<<endl;
    cout<<"1. to traverse for begining"<<endl;
    cout<<"2. to traverse from end"<<endl;
    cin>>choice;
    if(choice==1)
    {
    cout<<"created list is"<<endl;
    printlistbeg();
    }
    else
    {
        cout<<"Created list is"<<endl;
        printlistend();
    }
}
void createlist(int n)
{
    int data;
    struct node *newnode;
    head=(struct node *)malloc(sizeof(struct node));
    if(head!=NULL)
    {

        cout<<"Enter the data for head"<<endl;
        cin>>data;
        head->data=data;
        head->prev=NULL;
        head->next=NULL;
        last=head;
        for(int i=2;i<=n;i++)
        {
            newnode=(struct node *)malloc(sizeof(struct node));
            if(newnode!=NULL)
            {

            cout<<"Enter the data for node "<<i<<endl;
            cin>>data;
            newnode->data=data;
            newnode->prev=last;
            newnode->next=NULL;
            last->next=newnode;
            last=newnode;
            }
            else
            {
                cout<<"unable to allocate memory";
                break;
            }
        }
    }
    else
    {
        cout<<"unable to allocate memory";
        exit(0);
    }
}
void printlistbeg()
{

    struct node *temp;
    int n=1;
    if(head==NULL)
    {
        cout<<"error in memory allocation"<<endl;
        exit(0);
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<n<<" ";
            cout<<temp->data<<endl;
            n++;
            temp=temp->next;

        }
    }
}
void printlistend()
{
    struct node *temp;
    int n=0;
    if(last==NULL)
    {
        cout<<"Error in allocation";
        exit(0);
    }
    else
    {
        temp=last;
        while(temp!=NULL)
        {
            cout<<n<<" "<<temp->data<<endl;
            temp=temp->prev;
            n++;
        }
    }
}
void insertatbeg(int n)
{
    struct node *newnode, *temp;
    int data;
    if(head==NULL)
    {

    cout<<"error in memory";
    exit(0);
    }
     else
     {
        cout<<"enter the data for newnode"<<endl;
        cin>>data;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=head;
        newnode->prev=NULL;
        head->prev=newnode;
        head=newnode;
        temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
        }

    }

}
void insertatend(int n)
{
    struct node *newnode;
    if(head==NULL)
    {
        cout<<"Error in allocation";
    }
    else
    {
        int data;
        cout<<"Enter the data to insert at last"<<endl;
        cin>>data;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        newnode->prev=last;
        last->next=newnode;
        last=newnode;
    }
}
