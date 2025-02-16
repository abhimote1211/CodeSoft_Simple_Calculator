#include<iostream>
using namespace std;
int main()
{
    char operators;
    double n1,n2;
    cout<<"********************************************************"<<endl;
    cout<<"*********** SIMPLE CALCULATOR BY ABHISHEK **************"<<endl;
    cout<<"********************************************************\n"<<endl;
    cout<<"You can perform Addition(+), Subtraction(-), Multiplication(*), Division(/) "<<endl;
    
    cout << "Enter First Number: ";
    cin >> n1;
    cout << "Enter an Operator (+, -, *, /): ";
    cin >> operators;
    cout << "Enter Second Number: ";
    cin >> n2;

    switch (operators)
    {
        case '+':
            cout << n1 << " + " << n2 << " = " << n1 + n2<<endl;
            cout<<"The Result is "<<n1+n2;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2<<endl;
            cout<<"The Result is "<<n1-n2;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2<<endl;
            cout<<"The Result is "<<n1*n2;
            break;
        case '/':
            if (n2 != 0)
            {
                cout << n1 << " / " << n2 << " = " << n1 / n2<<endl;
                cout<<"The Result is "<<n1/n2<<endl;
            }
            else
            {
                cout << "Error! Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Error: Invalid Operator. Please use +,-,*,/ ";
    }

    return 0;
}
