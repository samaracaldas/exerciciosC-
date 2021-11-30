#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <climits>


using namespace std;

int main()
{
    int x, y;


    cout << "Digite dois numeros: ";
    cin >> x >> y;

    while (x != y){
        if (x < y){
            cout << "CRESCENTE" << endl;
        }
        else {
            cout << "DECRESCENTE" << endl;
        }

        cout << "Digite outros dois números: " << endl;
        cin >> x >> y;
    }


    return 0;
}
