//Joaquín José Cerdán López
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    float primero, segundo, resultado = 0;
    char operacion, repetir = 's';

    vector<string> historial;

    cout << "****************" << endl;
    cout << "  CALCULADORA:" << endl;
    cout << "****************" << endl;

    do{
        do{

            cout << "Introduzca la operacion a realizar (+, -, *, /):" << endl;
            cin >> operacion;

        }while(operacion != '/' && operacion != '*' && operacion != '+' && operacion != '-');
        cout << endl << "Introduzca el 1er numero:" << endl;
        cin >> primero;
        cout << "Introduzca el 2o numero:" << endl;
        cin >> segundo;

        switch (operacion)
        {
        case '+':
            resultado = primero + segundo;
            break;
        case '-':
            resultado = primero - segundo;
            break;
        case '/':
            if(segundo != 0)
                resultado = primero / segundo;
            else {
                cout << endl << "No se puede dividir entre 0" << endl << endl;
                return 0;
            }
            
            break;
        case '*':
            resultado = primero * segundo;
            break;
        }

        cout << endl << "El resultado es: " << resultado << endl << endl;

        //historial.push_back(primero + operacion + segundo + " = " + resultado);
        historial.push_back(to_string(primero) + " " + operacion + " " + to_string(segundo) + " = " + to_string(resultado));

        cout << "Quiere realizar otra operacion? (s/n): ";
        cin >> repetir;

    }while( repetir == 's');

    cout << endl << "Historial:" << endl << endl;
    for(int i = 0; i < historial.size(); i++)
        cout << historial[i] << endl;
    return 0;
}
