#include <iostream>
#include <string>
using namespace std;

string nome;
int nascimento;
int ano;
int atual;

void obterDados() {
    cout << "Qual o seu nome?" << "\n";
    cin >> nome;

    cout << "\n" << nome << ", em que ano que voce nasceu?" << "\n";
    cin >> nascimento;

    cout << "\n" << nome << ", em que ano nos estamos?" << "\n";
    cin >> atual;

    cout << "\nDigite o ano em que voce quer saber a sua idade:" << "\n";
    cin >> ano;
}

void resultado() {
    if (ano < atual){
        cout << "\n" << nome << ", Em " << ano << " voce tinha " << ano - nascimento << " anos." << "\n";
    } else {
        cout << "\n" << nome << ", Em " << ano << " voce vai ter " << ano - nascimento << " anos." << "\n";
    }
}

main() {
    obterDados();
    resultado();
    system("pause");
    return 0;
}