#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <climits>


using namespace std;

int main()
{
    int N, Nmenores;
    double media, soma, percentualmenores

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;


    string nomes[N];
    int idades[N];
    double alturas[N];

    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idades: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    soma = 0;
    for (int i = 0; i < N; i++) {
         soma = soma + alturas[i];
    }
    media = soma / N;


    cout << fixed << setprecision(2);
    cout << "Altura media: " << endl;

    cont = 0;
    for (int i = 0; i < N; i++) {
         if (idades[i] < 16){
             cont++;

         }




    return 0;
}
