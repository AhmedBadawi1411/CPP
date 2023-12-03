#include <iostream>

using namespace std;

void print();
void basic_arithmatic_operations();
void sum();

int main()
{
    sum();
    return 0;
}


void print()
{
    cout<<"************************\n";
    cout<<"Programming Fundamentals\n";
    cout<<"'C++'\n";
    cout<<"Basic Concepts\n";
    cout<<"\\\\\\\\Let's Start\\\\\\\\\n";
    cout<<"************************\n";
}

void basic_arithmatic_operations()
{
    float num1,num2;
    cout<<"First Number : ";
    cin>>num1;
    cout<<"Second Number : ";
    cin>>num2;
    cout<<num1<<"  +  " <<num2<<" = "<<num1+num2<<endl;
    cout<<num1<<"  -  " <<num2<<" = "<<num1-num2<<endl;
    cout<<num1<<"  /  " <<num2<<" = "<<num1/num2<<endl;
    cout<<num1<<"  *  " <<num2<<" = "<<num1*num2<<endl;
    cout<<num1<<" Mod " <<num2<<" = "<<(int(num1)%int(num2))<<endl;
}

void sum()
{
    float num1,num2,num3;
    cout<<"First Number  : ";
    cin>>num1;
    cout<<"Second Number : ";
    cin>>num2;
    cout<<"Third Number  : ";
    cin>>num3;
    cout<<num1<<"  +  " <<num2<<"  +  " <<num3<<" = "<<num1+num2+num3<<endl;
}

