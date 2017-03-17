#include <iostream>

using namespace std;

static int suma (int a, int b) {
    int resultado = a+b;
    return resultado;
}

static int resta (int a, int b) {
    int resultado = a-b;
    return resultado;
}

static int multiplicacion (int a, int b) {
    int resultado = a*b;
    return resultado;
}

static int division (int a, int b) {
    int resultado = a/b;
    return resultado;
}

static int menu () {
    system("cls");
    int opcion;
    cout<<"**********************************"<<endl;
    cout<<"********Calculadora Simple********"<<endl;
    cout<<"**********************************"<<endl;
    cout<<"1. Sumar."<<endl;
    cout<<"2. Restar."<<endl;
    cout<<"3. Multiplicar."<<endl;
    cout<<"4. Dividir."<<endl;
    cout<<"5. Salir."<<endl;
    cout<<"Eliga una opcion: ";
    cin>>opcion;

    return opcion;
}

static int operacion (int opcion) {
    int a, b;
    cout<<"Ingrese a: ";
    cin>>a;cout<<endl;
    cout<<"Ingrese b: ";
    cin>>b;cout<<endl;

    if (opcion == 1) {
        //LA SUMA
        cout<<"La suma a+b es: "<<suma(a, b)<<endl;
        system("pause");
        return opcion;
    } else if (opcion == 2){
        //LA RESTA
        cout<<"La resta a-b es: "<<resta(a, b)<<endl;
        system("pause");
        return opcion;
    } else if (opcion == 3){
        //LA MULTIPLICACION
        cout<<"La multipicacion a*b es: "<<multiplicacion(a, b)<<endl;
        system("pause");
        return opcion;
    } else if (opcion == 4){
        //LA DIVISION
        cout<<"La division a/b es: "<<division(a, b)<<endl;
        system("pause");
        return opcion;
    } else {
        return opcion;
    }
    return 0;
}

int calculadora (){
    int opcion = menu();
    if (opcion < 5){
        opcion = operacion(opcion);
        calculadora();
    } else if (opcion > 5) {
        cout<<"Opcion invalida, seleccione nuevamente..."<<endl;
        system("pause");
        calculadora();
    } else {
        cout<<"Saliendo del sistema..."<<endl;
        system("exit");
    }
    return 0;
}
