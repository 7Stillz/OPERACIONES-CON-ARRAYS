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
                    cout << "\n2.- INSERTAR DESPUES DE ...";
                    cout << "\n3.- INSERTAR ANTES DE ...";
                    cout << "\n4.- ELIMINAR...";
                    cout << "\n5.- ELIMINAR ANTES DE...";
                    cout << "\n6.- MODIFICAR...";
                    cout << "\n7.- MOSTRAR...";
                    cout << "\n8.- SALIR...";
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
                            cout<<"\n\t\t INSERTAR DESPUES DE : "; cin>>dato;
                            insertad_DD(x,n,max,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 3:
                            cout<<"\n\t\t INSERTAR ANTES DE : "; cin>>dato;
                            insertad_AD(x,n,max,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 4:
                            cout<<"\n\t\tDATO A ELIMINAR: "; cin>>dato;
                            elimina_d(x,n,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 5:
                            cout<<"\n\t\tELIMINAR ANTES DE: "; cin>>dato;
                            eliminad_AD(x,n,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 6:
                            cout<<"\n\t\tDATO A MODIFICAR: "; cin>>dato;
                            modifica_d(x,n,dato);
                            mostrar(x,n);
                            break;
                        case 7:
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 8:
                            break;
                    }
                }while(opc>0 and opc<8);
                break;
            case 2: 
                do{
                    system("cls");
                    cout << "\n\n\nARREGLOS ORDENADOS";
                    cout << "\n===================";
                    cout << "\n\n1.- INSERTAR...";
                    cout << "\n\n2.- INSERTAR DESPUES DE ...";
                    cout << "\n\n3.- INSERTAR ANTES DE ...";
                    cout << "\n\n4.- ELIMINAR...";
                    cout << "\n\n5.- MODIFICAR...";
                    cout << "\n\n6.- MOSTRAR...";
                    cout << "\n\n7.- S A L I R...";
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
                            cout<<"\n\t\t INSERTAR DESPUES DE : "; cin>>dato;
                            insertao_DD(x,n,max,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 3:
                            cout<<"\n\t\t INSERTAR ANTES DE : "; cin>>dato;
                            insertao_AD(x,n,max,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 4:
                            cout<<"\n\t\tDATO A ELIMINAR: "; cin>>dato;
                            elimina_o(x,n,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 5:
                            cout<<"\n\t\tDATO A MODIFICAR: "; cin>>dato;
                            modifica_o(x,n,dato);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 6:
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 7:
                            break;
                    }


                }while(opc>0 and opc<7);
                break;
            case 3:
                break;
        }
    }while(op>0 and op<3);
    return 0;
}