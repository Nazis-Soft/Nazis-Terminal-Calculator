#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
    double liczba1;
    double liczba2;
    int wybor;
    cout <<"Co chcesz zrobic? \n";
    cout <<"1 - Dzielenie\n";
    cout <<"2 - Mnozenie\n";
    cout <<"3 - Dodawanie \n";
    cout <<"4 - Odejmowanie \n";
    cout <<"5 - EXIT \n";
    cin >> wybor;
    while (wybor != 1 && wybor != 2 && wybor != 3 && wybor != 4 && wybor != 5)
        {
            cout <<"Nieprawidlowa liczba prosze wprowadzic liczbe od 1 do 5\n";
    cin >> wybor;
        }
            if (wybor == 5)
                {
                    exit(0);
                }
    cout <<"Podaj pierwsza liczba: ";
    cin >> liczba1;
    cout <<"Podaj druga liczba: ";
    cin >> liczba2;
    while(wybor == 1)
        {
            if(liczba1 == 0 || liczba2 == 0)
                {
                    cout <<"Cannot Divide By Zero\n";
                    cout <<"Podaj pierwsza liczba: ";
                    cin >> liczba1;
                    cout <<"Podaj druga liczba: ";
                    cin >> liczba2;
                } else
                {
                    break;
                }
        }
    switch(wybor)
        {
            case 1:
            cout <<liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2 << endl;
            break;

            case 2:
            cout <<liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2 << endl;
            break;

            case 3:
            cout <<liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << endl;
            break;

            case 4:
            cout <<liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2 << endl;
            break;
        }

    }
}
