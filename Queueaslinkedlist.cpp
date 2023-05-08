#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
struct node *rear=NULL ;
struct node *front=NULL;
struct node *temp;
void enqueue()
{
    int val;
    cout << "insert the queue elemnts :"<< endl;
    cin >> val;  
    if(rear=NULL)
    {
        rear=(struct node*)malloc(sizeof(struct node));
        rear->next=NULL;
        rear->data=val;
        front =rear;
    }
    else
    [
        temp=(struct node*)malloc(sizeof(struct node));
        rear->next=temp;
        rear->data=val;
        temp->next=NULL;
        rear=temp;
    ]
}
void dequeue()
{
    temp =front;
    if (front ==NULL)
    {
        cout <<"queue under flow"<<endl;
    }
    else if(temp->next!=NULL)
    {
        temp=temp->next;
        cout <<"elemnt is deleted"<<front->data<<endl;
        free(front);
        front=temp;
    }
    else
    {
        cout <<"the dequed elemnt is "<<front->data<<endl;
        free(front);
        front=NULL;
        rear=NULL;
    }
    void Display()
    {
        temp=front;
        if((front==NULL)&& (rear==NULL))
        {
            cout <<"Queue is empty"<< endl;
            retuen ;
        }
        cout <<" Queue elemnts are :"<< endl;
        while(temp!=NULL)
        {
            cout <<temp->data<<" ";
            temp=temp->next;
        }
        cout << endl;
    }
}
int main()
{
    int ch;
    cout << " 1) Enqueue in Queue "<< endl;
    cout << " 2) dequeue from Queue "<< endl;
    cout << " 3) Display the Queue elements "<< endl;
    cout << " 4) Exit "<< endl; 
     do 
    {
        cout << " enter your choice "<< endl;
         cin >> ch;
     switch (ch)
     {
         case 1:
        {
         cout << " enter the elemnt you want to enqueue "<< endl;
            enqueue ();
            break;
        }
        case 2:
        {
            dequeue();
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