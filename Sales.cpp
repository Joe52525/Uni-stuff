#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    for (int i=1;i<=2;i++)
    {
        cout <<"Enter todasys sales for store "<< i << " : ";
        cin >>arr[i];
    }
    cout <<"SALES BAR CHART" << endl;
    cout << "(EACH * = $100 )" << endl;
    for (int i=1;i<=2;i++)
    {
       int x=arr[i]/100;
       int j=0;
       cout <<"store"<<i;
        while(j< x )
        {
         cout << "*";
         j++; 
        }
         cout <<"\n";
    }

}
