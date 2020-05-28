#include<iostream>
#include<limits.h>
using namespace std;
#define SIZE 100
int stack[SIZE];
int top = -1;
void push(int element);
int  pop();
int main()
{
    int choice, data;

    while(1)
    {

        printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        cin>>choice;

        switch(choice)
        {
            case 1:
                printf("Enter data to push into stack: ");
                cin>>data;


                push(data);
                break;

            case 2:
                data = pop();


                if (data != INT_MIN)
                    cout<<"Data =>"<<data<<endl;
                break;

            case 3:
                cout<<"Stack Size"<<top+1;
                break;

            case 4:
                cout<<"Exiting......."<<endl;
                exit(0);
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

        cout<<endl;
    }


    return 0;
}
void push(int element)
{
    if (top >= SIZE)
    {
        cout<<"Stack Overflow, can't add more element element to stack.\n";
        return;
    }
    top++;
    stack[top] = element;

    cout<<"Data pushed to stack"<<endl;
}

int pop()
{
    if (top < 0)
    {
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
    }

}
