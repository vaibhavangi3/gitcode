
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*head;
void createlist(int n);
void printlist(int n);
void insatmed(int n);
int main()
{
    int n;
    cout<<"Enter the no. of nodes"<<endl;
    cin>>n;
    createlist(n);
    cout<<"Created list is"<<endl;
    printlist(n);
    insatmed(n);
    cout<<"Created new list is"<<endl;
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

}
void insatmed(int n)
{
    int data;
    struct node *temp,*temp1,*newnode;
    if(head==NULL)

    {
        cout<<"error in memory allocation"<<endl;
        exit(0);
    }
    else{
        cout<<"enter data to be inserted at middle"<<endl;
        cin>>data;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        temp=head;
        for(int i=2;i<n/2;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                break;
            }
        }
        if(temp!=NULL)
        {
         newnode->next=temp->next;
         temp->next=newnode;
        }

    }
}
