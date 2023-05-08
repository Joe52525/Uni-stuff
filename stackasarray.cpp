#include <iostream>
using namespace std;
int stack[10] ,n=10,top= -1;
    void push ( int val )
    {
        if (top >= n-1)
        cout << " stack overflow" << endl;
        else 
        {
            top++;
            stack[top]=val;

        }
    }
    void pop()
    {
        if (top <=-1)
        cout << " stack underflow"<< endl;
        else 
        {
            cout << "The poped eleemnt is :"<< stack[top]<< endl;
            top--;
        }
    }
    void display()
    {
        if (top >=0)
        {
           cout << "stack elements are "<< endl;
            for(int i=top;i>=0;i--)
            {
                cout << stack[i]<< endl;
            }
        }
        else 
        cout << "stack are empty"<< endl;
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
            break;
        }
        default:
        {
            cout << " Invalid choice "<< endl;
            // break;
        }
 

     }
   } while (ch!=4);
   return 0;
   
}