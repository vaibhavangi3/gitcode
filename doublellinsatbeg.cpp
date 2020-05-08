#include<iostream>
using namespace std;
struct node{
    int data;
    node *prev,*next;

}*head, *last;
void createlist(int n);
void printlistbeg();
void printlistend();
int main()
{
    int n;
    head=NULL;
    last=NULL;
    cout<<"Enter the no of nodes"<<endl;
    cin>>n;
    createlist(n);
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
