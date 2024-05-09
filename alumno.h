#include<iostream>
#include<string.h>
using namespace std;
struct Alumno{
    char codi[10], nombre[20];
    float nota1, nota2, prom;
};
void inserta_d(Alumno *x, int &n, int max, char codi[]){
    if(n<max-1)
    {
        n++;
        strcpy(x[n].codi,codi);  // x[n].codi=codi;
        cout<<"\n\t\tINGRESE EL NOMBRE DEL ALUMNO: "; cin>>x[n].nombre;
        cout<<"\n\t\tINGRESE LA PRIMERA NOTA DEL ALUMNO: "; cin>>x[n].nota1;
        cout<<"\n\t\tINGRESE LA SEGUNDA NOTA DEL ALUMNO: "; cin>>x[n].nota2;
        x[n].prom=(x[n].nota1+x[n].nota2)/2;
    }
    else
    {
        cout << "No hay espacio, no se pudo ingresar el dato" << endl;
        system("pause");
    }
}

void elimina_d(Alumno *x, int &n, char codi[]){
    int i,j,cen;
    if(n>-1){
        i=0; cen=0;
        while(i<=n and cen==0){
            if(strcmp(x[i].codi, codi)==0){   // x[i].codi==codi;
                cen=1;
                n--;
                for(j=i;j<=n;j++)
                    x[j]=x[j+1];
            }
            else
                i++;
        }
        if(cen==0)
            cout<<"\n\n\t\t"<<codi<<" NO ESTA EN EL ARREGLO\n\n ";
            
    }
    else{
        cout<<"\n\n\nEL ARREGLO ESTA VACIO...\n\n\n";
        system("pause");
    }
}
void modifica_d(Alumno *x, int n, char codi[]){
    int i, cen;
    int op;
    if(n>-1){
        i=0; cen=0;
        while(i<=n and cen==0){
            if(strcmp(x[i].codi, codi)==0){  //x[i].codi==codi;
                cen=1;
                cout<<"\n\n\tQUE QUIERE MODIFICAR?: ";
                cout<<"\n\n\t1.- CODIGO DEL ALUMNO...";
                cout<<"\n\n\t2.- NOMBRE DEL ALUMNO...";
                cout<<"\n\n\t3.- LA PRIMERA NOTA DEL ALUMNO...";
                cout<<"\n\n\t4.- LA SEGUNDA NOTA DEL ALUMNO...";
                cout<<"\n\n\t5.- S A L I R...";
                cout<<"\n\n\t\t\t O P C I O N: "; cin>>op;
                switch(op){
                    case 1:
                        cout<<"\n\n\tESCRIBA EL NUEVO CODIGO DEL ALUMNO: ";
                        cin>>x[i].codi;
                        break;
                    case 2:
                        cout<<"\n\n\tESCRIBA EL NUEVO NOMBRE DEL ALUMNO: ";
                        cin>>x[i].nombre;
                        break;
                    case 3:
                        cout<<"\n\n\tESCRIBA LA PRIMERA NOTA DEL ALUMNO: ";
                        cin>>x[i].nota1;
                        x[i].prom=(x[i].nota1+x[i].nota2)/2;
                        break;
                    case 4:
                        cout<<"\n\n\tESCRIBA LA SEGUNDA NOTA DEL ALUMNO: ";
                        cin>>x[i].nota2;
                        x[i].prom=(x[i].nota1+x[i].nota2)/2;
                        break;
                    case 5:
                        break;
                }
                /*cin>>x[i].codi;*/
            }
            else
                i++;
        }
        if(cen==0){
            cout<<"\n\n\t\t"<<codi<<" NO ESTA EN EL ARREGLO\n\n";
            system("pause");
        }
    }
    else{
        cout<<"\n\n\nEL ARREGLO ESTA VACIO...\n\n\n";
        system("pause");
    }
}
void mostrar(Alumno *x, int n){
    int i;
    for(i=0;i<=n;i++){
        cout<<"\nx["<<i<<"]= "<<" CODIGO: "<< x[i].codi<<"\tNOMBRE: "<<x[i].nombre<<"\tNOTA 1: "<<x[i].nota1<<" NOTA 2: "<<x[i].nota2<<" PROMEDIO: "<<x[i].prom;
    }
    cout<<"\n\n";
}

int buscar(Alumno *x, int n, char codi[]){
    int i, pos;
    i=0;
    while(i<=n and strcmp(x[i].codi, codi)<0){
        i++;
    }
    if(i>n or strcmp(x[i].codi, codi)!=0){
        pos=-i;
    }
    else{
        pos=i;
    }
    return pos;
}

void inserta_o(Alumno *x, int &n, int max, char codi[]){
    if(n<max-1){
        int pos=buscar(x,n,codi);
        if(pos<=0){
            pos=-pos;
            n++;
            for(int i=n;i>=pos+1;i--){         // PROBLEMAS SI INSERTO UN DATO REPETIDO, ( SOLO SI INGRESO EL MISMO DATO DE LA POSICION 0)NO SE EJECUTA EL ELSE,
                strcpy(x[i].codi, x[i-1].codi);
                strcpy(x[i].nombre, x[i-1].nombre);
                x[i].nota1=x[i-1].nota1;
                x[i].nota2=x[i-1].nota2;
                x[i].prom=x[i-1].prom;
            }
            strcpy(x[pos].codi,codi);
            cout<<"\n\t\tINGRESE EL NOMBRE DEL ALUMNO: "; cin>>x[pos].nombre;
            cout<<"\n\t\tINGRESE LA PRIMERA NOTA DEL ALUMNO: "; cin>>x[pos].nota1;
            cout<<"\n\t\tINGRESE LA SEGUNDA NOTA DEL ALUMNO: "; cin>>x[pos].nota2;
            x[pos].prom=(x[pos].nota1+x[pos].nota2)/2;

        }
        else{
            cout<<"\n\n\nNO SE PUDO INSERTAR EL DATO YA QUE YA EXISTE EN EL ARREGLO...\n\n";
        }
    }
    else{
        cout<<"\n\n\nEL ARREGLO ESTA LLENO, NO SE PUDO INSERTAR EL DATO...\n\n";
    }
}

void elimina_o(Alumno *x, int &n, char codi[]){
    if(n>-1){
        int pos=buscar(x,n,codi);
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
void modifica_o(Alumno *x, int n, char codi[]){
    if(n>-1){
        int op;
        int pos=buscar(x,n,codi);
        char codi1[10];
        if(pos>=0){
            cout<<"\n\n\tQUE QUIERE MODIFICAR?: ";
            cout<<"\n\n\t1.- CODIGO DEL ALUMNO...";
            cout<<"\n\n\t2.- NOMBRE DEL ALUMNO...";
            cout<<"\n\n\t3.- LA PRIMERA NOTA DEL ALUMNO...";
            cout<<"\n\n\t4.- LA SEGUNDA NOTA DEL ALUMNO...";
            cout<<"\n\n\t5.- S A L I R...";
            cout<<"\n\n\t\t\t O P C I O N: "; cin>>op;
            switch(op){
                case 1:
                {
                    /*for(int i=pos;i<=n;i++){        
                        x[i]=x[i+1];
                    }*/
                    cout<<"\n\n\tESCRIBA EL NUEVO CODIGO DEL ALUMNO: "; cin>>codi1;
                    n--;
                    for(int i=pos;i<=n;i++){        
                        strcpy(x[i].codi,x[i+1].codi);
                            // ELIMINAR EL CODIGO PARA PODER MODIFICARLO DESPUES x[i].codi=x[i+1].codi;
                    }
                    n++;
                    int pos1=buscar(x,n,codi1);
                    pos1=-pos1;
                    for(int i=n;i>=pos1;i--){
                        strcpy(x[i+1].codi,x[i].codi); //x[i+1].codi=x[i].codi;
                        strcpy(x[i+1].nombre,x[i].nombre);
                        x[i+1].nota1=x[i].nota1;
                        x[i+1].nota2=x[i].nota2;
                        x[i+1].prom=x[i].prom;
                    }
                    strcpy(x[pos1].codi,codi1);
                    
                    
                    break;
                }
                case 2:
                {
                    cout<<"\n\n\tESCRIBA EL NUEVO NOMBRE DEL ALUMNO: "; cin>>x[pos].nombre;
                    break;
                }
                case 3:
                    cout<<"\n\n\tESCRIBA LA PRIMERA NOTA DEL ALUMNO: ";
                    cin>>x[pos].nota1;
                    x[pos].prom=(x[pos].nota1+x[pos].nota2)/2;
                    break;
                case 4:
                    cout<<"\n\n\tESCRIBA LA SEGUNDA NOTA DEL ALUMNO: ";
                    cin>>x[pos].nota2;
                    x[pos].prom=(x[pos].nota1+x[pos].nota2)/2;
                    break;
                case 5:
                    break;
            }
            
        }
        else{
            cout<<"\n\nEL DATO A MODIFICAR NO EXISTE\n\n";
        }
    }
}
