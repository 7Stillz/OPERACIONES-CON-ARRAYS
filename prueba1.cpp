#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int suma=0;
    for(int i=0;i<b;i++){
        suma+=a;
    }
    cout<<endl<<suma;
    return 0;
}