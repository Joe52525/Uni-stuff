#include<iostream>
using namespace std;
int queue[5],n=5,front=-1,rear=-1;
void enqueue()
{
    int val;
    if(rear==n-1)
    {
        cout <<"Queue overflow"<< endl;
    }
    else
    {
    if (front==-1)
     
        front=0;
        cout << "Insert elemnts to Queue"<< endl;
        cin >> val;
        rear++;
        queue[rear]=val;
    }
}
void dequeue()
{
    if((front>rear) || (front==-1))
    {
        cout << "Queue under flow"<< endl;
    }
    else
    {
        cout << "element deleted from Queue is "<< queue[front]<< endl;
        front++;
    }
}
void display()
{
    if(front==-1)
    {
        cout <<"The Queue is empty"<<endl;
    }
    else
    {
        cout <<"Queue elemnts are:"<<endl;
        for (int i=front;i<=rear;i++)
        {
            cout <<queue[i]<<endl;
        }
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