
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*head;
void createlist(int n);
void printlist(int n);
void deletelistfirst(int n);
void deletelistlast(int n);
int main()
{
    int n,x;
    cout<<"Enter the no. of nodes"<<endl;
    cin>>n;
    createlist(n);
    cout<<"Created list is"<<endl;
    printlist(n);
    cout<<"Enter 1 to delete data at 1st position or enter 2 to delete at last position"<<endl;
    cin>>x;
    if(x==1)
    {
    cout<<"AFTER deleting 1st element"<<endl;
    deletelistfirst(n);
    }
    if(x==2)
    {
        cout<<"AFTER deleting last element"<<endl;
        deletelistlast(n);
    }
    else{
        cout<<"Try again"<<endl;
    }
    cout<<"New list is"<<endl;
     printlist(n);
}
void createlist(int n)
{
    int data;
    struct node *temp,*newnode;
    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        cout<<"Error memory allocation";
        exit(0);
    }
    else
    {
        cout<<"Enter the data for head node"<<endl;
        cin>>data;
        head->data=data;
        head->next=NULL;
        temp=head;
        for(int i=2;i<=n;i++)
        {
            newnode=(struct node *)malloc(sizeof(struct node));
            if(newnode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
            cout<<"Enter data for "<<i<<" node"<<endl;
            cin>>data;
            newnode->data=data;
            newnode->next=NULL;

            temp->next=newnode;
            temp=temp->next;

        }
    }

}
void printlist(int n)
{
    struct node *temp;

    if(head==NULL)
    {
    cout<<"Error";
    exit(0);
        }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;

}
void deletelistfirst(int n)
{
    struct node *temp;
    if(head==NULL)
    {
        cout<<"error"<<endl;
        exit(0);
    }
    else
    {
        temp=head;
        head=head->next;
        cout<<"Data deleted : "<<temp->data<<endl;
        free(temp);
    }
}
void deletelistlast(int n)
{
    struct node *temp;
    if(head==NULL)
    {
        cout<<"error"<<endl;
        exit(0);
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            if(temp->next==NULL)
            {
                break;
            }
        }
        cout<<"Data deleted : "<<temp->data<<endl;
        free(temp);
    }
}
