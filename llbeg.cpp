#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*head;
void createlist(int n);
void printlist();
void insbeg(int n);
int main()
{
    int n;
    cout<<"enter the no of nodes : ";
    cin>>n;
    if(n>0)
    {
    cout<<"Create List"<<endl;
    createlist(n);
    }
    else{  cout<<"Empty"<<endl;}

    cout<<"printing list....."<<endl;
    printlist();
    insbeg(n);
    cout<<"printing list....."<<endl;
    printlist();
}
void createlist(int n)
{
    int data;
    struct node *temp,*newnode;
    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        cout<<"error";
        exit(0);

    }
        else{
            cout<<"enter the value of head : ";
            cin>>data;
            head->data=data;
            head->next=NULL;
            temp=head;
            for(int i=2;i<=n;i++)
            {
                newnode=(struct node *)malloc(sizeof(struct node));
                cout<<"enter the value of "<<i<<" node : ";
                cin>>data;
                newnode->data=data;
                newnode->next=NULL;

                temp->next=newnode;
                temp=temp->next;
            }

        }
}
void printlist()
{
    struct node *temp;
    if(head==NULL)
    {
        cout<<"Empty node";
    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
void insbeg(int n)
{
    int data;
    struct node *temp,*newnode;
    if(head==NULL)
    {
        cout<<"error in memory allocation";
        exit(0);
    }
    else
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        temp=head;
        cout<<"Enter the data for newnode"<<endl;
        cin>>data;
        newnode->data=data;
        newnode->next=temp;
        head=newnode;
    }

}
