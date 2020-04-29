#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*head;
void createlist(int n);
void printlist(int n);
void insend(int n);
int main()
{
    int n;
    cout<<"Enter the no. of nodes"<<endl;
    cin>>n;
    createlist(n);
    cout<<"Created list is"<<endl;
    printlist(n);
    insend(n);
    cout<<"Created list is"<<endl;
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
void insend(int n)
{
    int data;
    struct node *temp,*newnode;
    if(head==NULL)
    {
        cout<<"Error";
        exit(0);
    }
    else{
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter data for new node to be put at last"<<endl;
        cin>>data;
        newnode->data=data;
        newnode->next=NULL;
        temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            if(temp->next==NULL)
            {
                temp->next=newnode;
                break;
            }
        }
    }
}
