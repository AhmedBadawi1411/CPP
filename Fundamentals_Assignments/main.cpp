#include <iostream>
#include <math.h>

using namespace std;

void print();
void basic_arithmatic_operations();
void sum();
void solve_equations();

int main()
{
    solve_equations();
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

void solve_equations()
{
    short choose;
    float x,result;
    cout<<"\n1: f(x) = x^2 + 7x - 9\n2: g(x) = x^6 + 5x^4 + 2x^3 + 25\n";
    cout<<"\nChoose An Equation : ";
    cin>>choose;
    if(choose == 1)
    {
         cout<<"Input x value: ";
         cin>>x;
         result = ((x*x) + (7*x)) -9;
         cout<<"\nf("<<x<<")= "<<x<<"^2+7*"<<x<<"-9 = "<<result;
    }
    else if(choose == 2)
    {
        cout<<"Input x value: ";
        cin>>x;
        result = (pow(x,6)) + (5*(pow(x,4))) +(2*(pow(x,3))) + 25;
        cout<<"\nf("<<x<<")= "<<x<<"^6+5"<<x<<"^4"<<"2"<<x<<"^3"<<"+25 = "<<result<<endl;
    }

}

