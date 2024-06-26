#include<iostream>
using namespace std;
void inserta_d(int *x, int &n, int max, int dato){
    if(n<max-1)
    {
        n++;
        x[n] = dato;
    }
    else
    {
        cout << "No hay espacio, no se pudo ingresar el dato" << endl;
        system("pause");
    }
}
void insertad_DD(int *x, int &n, int max, int ref){
    if(n<max-1){
        int dato, i=-1, cen=0, pos;
        while(i<n and cen==0){
            i++;
            if(x[i]==ref){
                pos=i;
                cen=1;   // LO ENCONTRO AL DATO
            }
        }
        if(cen==1){
            n++;
            for(int j=n;j>=pos+1;j--){
                x[j]=x[j-1];
            }
            cout<<"ESCRIBA EL DATO A INSERTAR DESPUES DE "<<ref<<" : ";
            cin>>dato;
            x[pos+1]=dato;
        }
        else cout<<"EL DATO REFERENCIAL NO EXISTE EL ARREGLO";

    }
    else cout<<"\n\n\nEL ARREGLO ESTA LLENO, NO SE PUDO INSERTAR EL DATO...\n\n";
}
void insertad_AD(int *x, int &n, int max, int ref){
    if(n<max-1){
        int dato, i=-1, cen=0, pos;
        while(i<n and cen==0){
            i++;  
            if(x[i]==ref){
                pos=i;
                cen=1;   // LO ENCONTRO AL DATO
            }
        }
        if(cen==1){
            n++;
            for(int j=n;j>=pos+1;j--){
                x[j]=x[j-1];
            }
            cout<<"ESCRIBA EL DATO A INSERTAR DESPUES DE "<<ref<<" : ";
            cin>>dato;
            x[pos]=dato;
        }
        else cout<<"EL DATO REFERENCIAL NO EXISTE EL ARREGLO";

    }
    else cout<<"\n\n\nEL ARREGLO ESTA LLENO, NO SE PUDO INSERTAR EL DATO...\n\n";
}
void elimina_d(int *x, int &n, int dato){
    int i,j,cen;
    if(n>-1){
        i=0; cen=0;
        while(i<=n and cen==0){
            if(x[i]==dato){
                cen=1;
                n--;
                for(j=i;j<=n;j++)
                    x[j]=x[j+1];
            }
            else
                i++;
        }
        if(cen==0)
            cout<<"\n\n\t\t"<<dato<<" NO ESTA EN EL ARREGLO\n\n ";
            
    }
    else{
        cout<<"\n\n\nEL ARREGLO ESTA VACIO...\n\n\n";
        system("pause");
    }
}
void eliminad_AD(int *x, int &n, int ref){
    int i=-1, cen=0, pos;
    if(n>-1){
        while(i<n and cen==0){
            i++;
            if(x[i]==ref){
                pos=i;
                cen=1;
            }
        }
        if(cen==1){
            n--;
            for(int j=pos-1;j<=n;j++){
                x[j]=x[j+1];
            }
        }
        else cout<<"EL DATO REFERENCIAL NO EXISTE";
    }
    else cout<<"NO HAY DATOS EN EL ARREGLO";
}
void modifica_d(int *x, int n,int dato){
    int i, cen;
    if(n>-1){
        i=0; cen=0;
        while(i<=n and cen==0){
            if(x[i]==dato){
                cen=1;
                cout<<"\n\n\tDATO QUE MODIFICA : ";
                cin>>x[i];
            }
            else
                i++;
        }
        if(cen==0){
            cout<<"\n\n\t\t"<<dato<<" NO ESTA EN EL ARREGLO\n\n";
            system("pause");
        }
    }
    else{
        cout<<"\n\n\nEL ARREGLO ESTA VACIO...\n\n\n";
        system("pause");
    }
}
void mostrar(int *x, int n){
    int i;
    for(i=0;i<=n;i++){
        cout<<"\nx["<<i<<"]= "<<x[i];
    }
    cout<<"\n\n";
}
int busca(int *x, int n, int dato){
    int i, pos;
    i=0;
    while(i<=n and x[i]<dato){
        i++;
    }        
    if(i>n or x[i]>dato){
        pos=-i;
    }
    else{
        pos=i;
    }
    return pos;
}

void inserta_o(int *x, int &n,int max, int dato){
    if(n<max-1){
        int pos=busca(x,n,dato);      
        if(pos<0 or pos==0){
            pos=-pos;
            n++;
            for(int i=n;i>=pos+1;i--){         

                x[i]=x[i-1];
            }
            x[pos]=dato;
        }
        else{
            cout<<"\n\n\nNO SE PUDO INSERTAR EL DATO YA QUE YA EXISTE EN EL ARREGLO...\n\n";
        }
    }
    else{
        cout<<"\n\n\nEL ARREGLO ESTA LLENO, NO SE PUDO INSERTAR EL DATO...\n\n";
    }
}
void insertao_DD(int *x, int &n, int max, int ref){
    if(n<max-1){
        int dato;
        int pos=busca(x,n,ref);
        cout<<pos; 
        if(pos>=0){
            n++;
            for(int i=n;i>=pos+1;i--){                        // FUNCIONA PARA TODO
                x[i]=x[i-1];
            }
            cout<<"ESCRIBA EL DATO A INSERTAR DESPUES DE "<<ref<<" : ";
            cin>>dato;
            x[pos+1]=dato;
        }
        else cout<<"EL DATO REFERENCIAL NO EXISTE";

    }
    else  cout<<"\n\n\nEL ARREGLO ESTA LLENO, NO SE PUDO INSERTAR EL DATO...\n\n";
}
void insertao_AD(int *x, int &n, int max, int ref){
    if(n<max-1){
        int dato;
        int pos=busca(x,n,ref);
        if(pos>=0){
            n++;
            for(int i=n;i>=pos+1;i--){
                x[i]=x[i-1];
            }
            cout<<"ESCRIBA EL DATO A INSERTAR ANTES DE "<<ref<<" : ";
            cin>>dato;
            x[pos]=dato;
        }
        else cout<<"EL DATO REFERENCIAL NO EXISTE";

    }
    else  cout<<"\n\n\nEL ARREGLO ESTA LLENO, NO SE PUDO INSERTAR EL DATO...\n\n";
}
void elimina_o(int *x, int &n, int dato){
    if(n>-1){
        int pos=busca(x,n,dato);
        if(pos>=0){
            n--;
            for(int i=pos;i<=n;i++){
                x[i]=x[i+1];
            }
        }
        else{
            cout<<"\n\nEL DATO A ELIMINAR NO EXISTE\n\n";
        }
    }
    else{
        cout<<"\n\nEL ARREGLO ESTA VACIO\n\n";
    }
}
void modifica_o(int *x, int n, int dato){
    if(n>-1){
        int pos=busca(x,n,dato);
        if(pos>=0){
            int dato1;
            cout<<"\n\t\tINGRESE EL NUEVO DATO: "; cin>>dato1;
            n--;
            for(int i=pos;i<=n;i++){
                x[i]=x[i+1];
            }
            n++;
            int pos1=busca(x,n,dato1);
            pos1=-pos1;
            for(int i=n;i>=pos1;i--){
                x[i+1]=x[i];
            }
            x[pos1]=dato1;
            
        }
        else{
            cout<<"\n\nEL DATO A MODIFICAR NO EXISTE\n\n";
        }
    }

}

