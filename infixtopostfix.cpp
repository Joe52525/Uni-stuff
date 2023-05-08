#include<iostream>
#include<string>
#include <stack>
using namespace std;
// function that return precedence of operators
int precedence(char c)
{
if (c == '^')
{
return 3;
}
else if (c == '*' || c == '/')
{
return 2;
}
else if (c == '+' || c=='-')
{
return 1;
}
else
return -1;
}
void infixtopostfix(string s)
{
stack<char> st;
string result;
for (int i = 0; i < s.length(); i++)
{
char c = s[i];
// if scanned character is operand , add it to the string output

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || 
(c >= '0' && c <= '9'))
{
result += c;
}
// if scanned is charater is an ( push it to the stack
else if (c == '(')
{
st.push('(');
}
// if scanned is character ) pop from stack until ( is encountered

else if (c == ')')
{
while (!st.empty() && st.top() != '(')
{
char temp = st.top();
st.pop();
result += temp;
}
st.pop();
}
// if an operator is scanned 
else
{
while (!st.empty() && precedence(s[i]) <= 
precedence(st.top()))
{
char temp = st.top();
st.pop();
result += temp;
}
st.push(c);
}
}
// pop all remaining elements
while (!st.empty())
{
char temp = st.top();
st.pop();
result += temp;
}
cout << result << endl;
}
int main()
{
string exp ;
cout <<"Enter the given string"<< endl;
cin>>exp;
infixtopostfix(exp);
return 0;
}
