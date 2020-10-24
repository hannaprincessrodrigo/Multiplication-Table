#include <iostream>

using namespace std;

int main()
{
    int input, op;
    cout << "Enter an Integer: " << endl;
    cin >> input;
    cout << "Enter range: " << endl;
    cin >> op;
    cout << endl;

    for (int a = 1; a <= op; a++){

        cout << input << "" << " *" << " " << a << " = " << "" << input*a << endl;
    }

    cout << endl << endl << "Programmed by: Hanna Princess Rodrigo" << endl;
    return 0;
}
