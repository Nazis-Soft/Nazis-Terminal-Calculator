#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
    double liczba1;
    double liczba2;
    int wybor;
    cout <<"What do you want? \n";
    cout <<"1 - Division\n";
    cout <<"2 - Multiplication\n";
    cout <<"3 - Addition\n";
    cout <<"4 - Subtraction\n";
    cout <<"5 - EXIT \n";
    cin >> wybor;
    while (wybor != 1 && wybor != 2 && wybor != 3 && wybor != 4 && wybor != 5)
        {
            cout <<"Incorrect number please enter a number from 1 to 5\n";
    cin >> wybor;
        }
            if (wybor == 5)
                {
                    exit(0);
                }
    cout <<"Enter first number: ";
    cin >> liczba1;
    cout <<"Enter the second number: ";
    cin >> liczba2;
    while(wybor == 1)
        {
            if(liczba1 == 0 || liczba2 == 0)
                {
                    cout <<"Cannot Divide By Zero\n";
                    cout <<"Enter first number: ";
                    cin >> liczba1;
                    cout <<"Enter the second number: ";
                    cin >> liczba2;
                } else
                {
                    break;
                }
        }
    switch(wybor)
        {
            case 1:
            cout << "\n" << "\n" << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2 << "\n" << "\n" << endl;
            break;

            case 2:
            cout << "\n" << "\n" << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2 << "\n" << "\n" << endl;
            break;

            case 3:
            cout << "\n" << "\n" << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << "\n" << "\n" << endl;
            break;

            case 4:
            cout << "\n" << "\n" << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2 << "\n" << "\n" << endl;
            break;
        }

    }
}
