#include<iostream>
#include <string>

using namespace std;

int main(){
    

    while (true)
    {
        string continuar;
        cout << "Continuar? (sim/nao): ";
        cin >> continuar;
        if (continuar == "nao"){
            break;
        }
    }
    return 0;
    




}

