#include<iostream>
#include<string.h>
#include"alumno.h"
#define max 10
using namespace std;
int main(){
    Alumno x[max];
    int opc, op, n=-1;
    char codi[10];
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
                    cout << "\n1.- INSERTAR UN ALUMNO...";
                    cout << "\n2.- ELIMINAR UN ALUMNO...";
                    cout << "\n3.- MODIFICAR UN ALUMNO...";
                    cout << "\n4.- MOSTRAR EL REGISTRO DE TODOS LOS ALUMNOS...";
                    cout << "\n5.- S A L I R...";
                    cout << "\n\n\t\t\tOPCION: ";
                    cin >> opc;
                    system("cls");
                    switch(opc){
                        case 1:
                            cout<<"\n\t\tINGRESE EL CODIGO DEL ALUMNO: "; cin>>codi;
                            inserta_d(x,n,max,codi);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 2:
                            cout<<"\n\t\tINGRESE EL CODIGO DEL ALUMNO A ELIMINAR: "; cin>>codi;
                            elimina_d(x,n,codi);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 3:
                            cout<<"\n\t\tINGRESE EL CODIGO DEL ALUMNO A MODIFICAR: "; cin>>codi;
                            modifica_d(x,n,codi);
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
                    cout << "\n\n1.- INSERTAR UN ALUMNO...";
                    cout << "\n\n2.- ELIMINAR UN ALUMNO...";
                    cout << "\n\n3.- MODIFICAR UN ALUMNO...";
                    cout << "\n\n4.- MOSTRAR EL REGISTRO DE TODOS LOS ALUMNOS...";
                    cout << "\n\n5.- S A L I R...";
                    cout << "\n\n\t\t\t OPCION: ";
                    cin >> opc;
                    system("cls");
                    switch(opc){
                        case 1:
                            cout<<"\n\t\tINGRESE EL CODIGO DEL ALUMNO: "; cin>>codi;
                            inserta_o(x,n,max,codi);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 2:
                            cout<<"\n\t\tINGRESE EL CODIGO DEL ALUMNO A ELIMINAR: "; cin>>codi;
                            elimina_o(x,n,codi);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 3:
                            cout<<"\n\t\tINGRESE EL CODIGO DEL ALUMNO A MODIFICAR: "; cin>>codi;
                            modifica_o(x,n,codi);
                            mostrar(x,n);
                            system("pause");
                            break;
                        case 4:
                            
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