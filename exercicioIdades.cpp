#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <climits>


using namespace std;

int main()
{
    int idade1, idade2;
    string nome1, nome2;
    double media;

    cout << "Dados da primeira pessoa: " << endl;
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media = (double) (idade1 + idade2) / 2;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos." << endl;

    return 0;
}
