#include<iostream>
using namespace std;
int cqueue[5];
int front=-1,rear=-1,n=5;
void encqueue(int val)
{
    if((front==0&&rear==n-1)||(front==rear+1))
    {
       cout <<"Queue over flow"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            if(rear=n-1)
            {
                rear=0;
            }
            else
            {
                rear=rear+1;
            }
        }
    }
    cqueue[rear]=val;
}
void decqueue()
{
    if(front==-1)
    {
        cout <<"Queue under flow"<<endl;
    }
    else
    {
        cout <<"Element dequeued from cqueue is  "<< cqueue[front]<<endl;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            if (front==n-1)
            {
                front=0;
            }
            else
            {
                front=front+1;
            }
        }
    }
}
void displaycq()
{
    int f=front;
    int r=rear;
    if (front==-1)
    {
        cout <<"The Queue is empty"<<endl;
    }
    else
    {
        if(f<=r)
        {
          cout <<cqueue[f]<<endl;
          f++;
        }
        else
        {
            while(f<=1)
            {
                cout << cqueue[f]<<endl;
                f++;
            }
            f=0;
            while(f<=r)
            {
                cout << cqueue[f]<<endl;
                f++;
            }
        }
    }
}
int main()
{
    int ch ,val;
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
            cin >>val;
            encqueue (val);
            break;
        }
        case 2:
        {
            decqueue();
            break;
        }
        case 3:
        {
            displaycq();
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