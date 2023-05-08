#include<iostream>
#include<string>
using namespace std;
class student
{
private:
string name ;
int roll_no;
public:

void setname(string n)
{
   name = n;
}
string getname()
{
    return name;
}
void setroll_no(int x)
{
    roll_no = x;
}
int getroll_no()
{
    return roll_no;
}  
};
int main() 
{
student s1;
s1.setname("John");
s1.setroll_no(2);
cout << "the student name:" << s1.getname() <<endl;
cout << "this car model is:"<< s1.getroll_no() <<endl;
}
