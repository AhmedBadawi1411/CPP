#include <iostream>
#include <math.h>

using namespace std;

/*
** main    : Entry Point.
** print() : program number one 'cout' Practice.
** basic_arithmatic_operations() : takes two numbers and return its addition, muliplication, division, modules, subtraction.
** sum()   : takes 3 numbers and return its sum.
** solve_equations() : solving the following equations - f(x)= x^2+7x-9 |&&| g(x) = x^6+5x^4+2x^3+25 -.
*/

void print();
void basic_arithmatic_operations();
void sum();
void solve_equations();
void colors();
void basic_calculator();
void degree_checker();
void grade_checker();
void odd_or_even();
void grade_checker_v2();
void multiple_of_number();

int main()
{
    repeat:
    multiple_of_number();
    goto repeat;
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

void colors()
{


    char ch;
    cout<<"Enter Character : ";
    cin>>ch;
    switch(ch)
    {
    case 'm':
    case 'M':
        cout<<"Maginta"<<endl;
        break;
    case 'w':
    case 'W':
        cout<<"White"<<endl;
        break;
    case 'r':
    case 'R':
        cout<<"Red"<<endl;
        break;
    case 'i':
    case 'I':
        cout<<"Icterine"<<endl;
        break;
    default:
        cout<<"No Color"<<endl;
        break;
    }
}

void basic_calculator()
{
    float num1,num2;
    char ch;

    cout<<"***********************************\nFirst Number : ";
    cin>>num1;
    cout<<"Second Number : ";
    cin>>num2;
    onError:
    cout<<"Choose Operation:\n  + Addition\n  - Subtraction\n  / Division\n  * Multiplication\n  % Modules \n  ^ Power\n  ";
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<"\n"<<num1<<"  +  " <<num2<<" = "<<num1+num2<<"\n";
        break;
        case '-':
        cout<<"\n"<<num1<<"  -  " <<num2<<" = "<<num1-num2<<"\n";
        break;
        case '/':
         cout<<"\n"<<num1<<"  /  " <<num2<<" = "<<num1/num2<<"\n";
        break;
        case '*':
        cout<<"\n"<<num1<<"  *  " <<num2<<" = "<<num1*num2<<"\n";
        break;
        case '%':
        cout<<"\n"<<num1<<" Mod " <<num2<<" = "<<(int(num1)%int(num2))<<"\n";
        break;
        case '^':
        cout<<"\n"<<num1<<" Pow " <<num2<<" = "<<pow(num1,num2)<<"\n";
        break;
        default:
            cout<<"Operation Not Found!\n";
            goto onError;

    };
}

void degree_checker()
{
    float x{0.0f};
    onError:
    cout<<"Degree : ";
    cin>>x;
    if(x > 100 || x < 0)
    {
        cout<<"Invalid Degree\n-----------------------------\n";
        goto onError;
    }
    else if(x >= 50 )
    {
        cout<<"Pass\n-----------------------------\n";
    }
    else
    {
        cout<<"Fail\n-----------------------------\n";
    }
}


void grade_checker()
{
    float x{0.0f};
    onError:
    cout<<"Degree : ";
    cin>>x;
    if(x > 100 || x < 0)
    {
        cout<<"Invalid Degree\n-----------------------------\n";
        goto onError;
    }
    else if(x >= 85 )
    {
        cout<<"Excellent\n-----------------------------\n";
    }
    else if(x >= 75 )
    {
        cout<<"Very Good\n-----------------------------\n";
    }
    else if(x >= 65 )
    {
        cout<<"Good\n-----------------------------\n";
    }
    else if(x >= 50 )
    {
        cout<<"Acceptable\n-----------------------------\n";
    }
    else
    {
        cout<<"Fail\n-----------------------------\n";
    }
}

void odd_or_even()
{
    int num{0};
    cout<<"Input Number : ";
    cin>>num;

    if(num % 2 == 0)
    {
        cout<<" -> "<<num<<" is EVEN\n***********************\n";
    }else{
        cout<<" -> "<<num<<" is ODD\n***********************\n";
    }
}

void grade_checker_v2()
{
    float x{0.0f};
    onError:
    cout<<"Degree : ";
    cin>>x;
    if(x > 100 || x < 0)
    {
        cout<<"Invalid Degree\n-----------------------------\n";
        goto onError;
    }
    else if(x >= 85 && x <= 100)
    {
        cout<<"Excellent\n-----------------------------\n";
    }
    else if(x >= 75 && x < 85)
    {
        cout<<"Very Good\n-----------------------------\n";
    }
    else if(x >= 65 && x < 75)
    {
        cout<<"Good\n-----------------------------\n";
    }
    else if(x >= 50 && x <65)
    {
        cout<<"Acceptable\n-----------------------------\n";
    }
    else
    {
        cout<<"Fail\n-----------------------------\n";
    }
}

void multiple_of_number()
{
    int y{1},x{1}, result {1};
    cout<<"Input Number: ";
    cin>>x;
    y=x;
    for( x ; x >= 1; x--)
    {
        result*=x;
    }
    cout<<"The Multiple Of "<<y<<" Is "<<result<<"\n\n************************\n";
}
