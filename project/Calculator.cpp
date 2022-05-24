#include<iostream>
using namespace std;

int main(){
    int a,b,r;
    char ch;

    cout<<"Enter operands (a and b): ";
    cin>>a>>b;

    cout<<"Enter the operator :";
    cin>>ch;

    switch(ch)
{
    case '+' : r = a + b;
               break;
}
cout<<"Result: "<<r;
return 0;
} 