#include<iostream>
#include<string>
using namespace std;
class car
{
private:
string maker ;
int yearmodel;
public:
car()
{
    cout << "HI"<< endl;
}
void setmaker(string m)
{
   maker = m;
}
string getmaker()
{
    return maker;
}
void setyearmodel(int x)
{
    yearmodel = x;
}
int getyearmodel()
{
    return yearmodel;
}
 ~car()
  {
    cout <<"bye"<<endl;
  }

};
int main() 
{
car c1;
c1.setmaker("BMW");
c1.setyearmodel(2020);
cout << "this car is made by:" << c1.getmaker() <<endl;
cout << "this car model is:"<< c1.getyearmodel() <<endl;
}
