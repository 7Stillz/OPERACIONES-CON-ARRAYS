#include<iostream>
#include"Arrays.h"
#define max 10
using namespace std;

int main(){
    int x[max], op, opc,n=-1, dato, i;
    do{
        system("cls");
        cout << "\nM  E  N  U";
        cout << "\n==========";
        cout << "\n1.- ARRAY DESORDENADOS...";
        cout << "\n2.- ARRAY ORDENADOS...";
        cout << "\n3.- SALIR" << endl;
        cout << "\n\n\t\t\t OPCION: ";
        cin >> op;
        switch(op){
            case 1:
                do{
                    system("cls");
                    cout << "\n\n\nARREGLOS DESORDENADOS";
                    cout << "\n======================" << endl;
                    cout << "\n1.- INSERTAR...";
                    cout << "\n2.- ELIMINAR...";
                    cout << "\n3.- MODIFICAR...";
                    cout << "\n4.- MOSTRAR...";
                    cout << "\n5.- SALIR...";
                    cout << "\n\n\t\t\tOPCION: ";
                    cin >> opc;
                    system("cls");
                    switch(opc){
                        case 1:
                            cout<<"\n\t\tDATO A INSERTAR: "; cin>>dato;
                            inserta_d(x,n,max,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 2:
                            cout<<"\n\t\tDATO A ELIMINAR: "; cin>>dato;
                            elimina_d(x,n,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 3:
                            cout<<"\n\t\tDATO A MODIFICAR: "; cin>>dato;
                            modifica_d(x,n,dato);
                            mostrar(x,n);
                            break;
                        case 4:
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 5:
                            break;
                    }
                }while(opc>0 and opc<5);
                break;
            case 2: 
                do{
                    system("cls");
                    cout << "\n\n\nARREGLOS ORDENADOS";
                    cout << "\n===================";
                    cout << "\n\n1.- INSERTAR...";
                    cout << "\n\n2.- ELIMINAR...";
                    cout << "\n\n3.- MODIFICAR...";
                    cout << "\n\n4.- MOSTRAR...";
                    cout << "\n\n5.- S A L I R...";
                    cout << "\n\n\t\t\t OPCION: ";
                    cin >> opc;
                    system("cls");
                    switch(opc){
                        case 1:
                            cout<<"\n\t\tDATO A INSERTAR: "; cin>>dato;
                            inserta_o(x,n,max,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 2:
                            cout<<"\n\t\tDATO A ELIMINAR: "; cin>>dato;
                            elimina_o(x,n,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 3:
                            cout<<"\n\t\tDATO A MODIFICAR: "; cin>>dato;
                            modifica_o(x,n,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 4:
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 5:
                            break;
                    }


                }while(opc>0 and opc<4);
                break;
            case 3:
                break;
        }
    }while(op>0 and op<3);
    return 0;
}