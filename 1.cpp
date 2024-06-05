#include<iostream>
#include<string.h>
#include"Arrays.h"
#define max 10
using namespace std;
int main(){
    int x[max], n=-1, op, dato;
    do{
        cout<<"\n1. INSERTAR UN DATO: ";
        cout<<"\n2. INSERTAR DESPUES DE: ";
        cout<<"\n3. MOSTRAR ARRAY: ";
        cout<<"\n4. SALIR";
        cout<<"\n\n\t\t\tOPCION: ";
        cin>>op;
        switch(op){
            case 1:
                cout<<"DATO A INSERTAR: ";
                cin>>dato;
                inserta_o(x,n,max,dato);
                break;
            case 2:
                cout<<"INSERTAR DESPUES DE: ";
                cin>>dato;
                insertao_DD(x,n,max,dato);
                break;
            case 3:
                mostrar(x,n);
                system("pause");
                break;
            case 4:
                break;
        }
    }while(op>0 and op<4);
}
