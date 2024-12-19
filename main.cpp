#include <iostream>

using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    double a = 0, b = 0, result = 0;
    int choice;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;

    cout << "Wybierz opcje: " << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            result = a + b;
            cout << "Wynik dodawania: " << result << endl;
            break;
        case 2:
            result = a - b;
            cout << "Wynik odejmowania: " << result << endl;
            break;
        case 3:
            result = a * b;
            cout << "Wynik mnozenia: " << result << endl;
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                cout << "Wynik dzielenia: " << result << endl;
            }else {
                cout << "Nie mozna dzielic przez zero" << endl;
            }
        default:
            cout << "Nie ma takiej opcji!" << endl;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.