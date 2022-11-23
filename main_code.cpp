#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int menu(string name){
    int opc_menu;
    cout << "\t\tMenu de " << name << endl;
    cout << "1. Temporizador\n"
    "2. Clases";
    cin >> opc_menu;
    return opc_menu;
}

string login(){
    string name, lastName;
    cout << "Nombre: " << endl; getline(cin, name);
    cout << "Apellido: " << endl; getline(cin, lastName);
    return name + " " + lastName;
}

int main(){
    string log;
    int menu_continue;
    cout << "\t\tBookNote\n\tSe eficaz en tu estudio" << endl;
    cout << "Ingresar Sesion:" <<endl;
    log = login();
    system("cls");
    cout << "Hola";

    do{
        menu_continue = menu(log);
    }while(menu_continue != 0);

    return 0;
}