#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
};
struct Node * top =NULL;
void push(int val)
{
    struct Node*newnode=(struct Node*) malloc(sizeof(struct Node)); 
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if (top==NULL)
    {
        cout << "stack underfloww"<< endl;
    }
    else
    {
        cout <<" THe popped elemnt is :"<< top->data<< endl;
        top=top->next;
    }
}
void display()
{
    struct Node* ptr;
    if(top==NULL)
    {
        cout <<"stack under flow"<< endl;
    }
    else
    {
        ptr=top;
        cout <<"Elements of array are :"<< endl;
        while(ptr!=NULL)
        {
            cout <<ptr->data << endl;
            ptr=ptr->next;
        }
    }
}
int main ()
{
    int ch,val;
    cout << " 1) push in stack "<< endl;
    cout << " 2) pop from stack "<< endl;
    cout << " 3) Display the stack elements "<< endl;
    cout << " 4) Exit "<< endl; 
    do 
    {
        cout << " enter your choice "<< endl;
       cin >> ch;
     switch (ch)
     {
         case 1:
        {
         cout << " enter the elemnt you want to psuh "<< endl;
         cin >> val;
        push (val);
         break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit"<< endl;
        }
        default:
        {
            cout << " Invalid choice "<< endl;
        }
 

     }
   } while (ch!=4);
   return 0;
   
}