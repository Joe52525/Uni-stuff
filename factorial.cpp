#include<iostream>
using namespace std;
void factorial(int n)
{
        int f=1,n1;
        n1=n;
        if(n==0)
        cout<<"Factorial of "<<n1<<" is 1" << endl;
        else
        {
                while(n>0)
                {
                        f=f*n;
                        n--;
                }
        }
        cout<<"Factorial of  "<<n1<<" is "<<f<< endl;
}
int main()
{
        int n;
        cout<<"Enter any number : ";
        cin>>n;
        factorial(n);
}


