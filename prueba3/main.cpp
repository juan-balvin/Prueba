#include <iostream>

using namespace std;
int main(){
    int condAst,condEspa,n;
    char espa=' ',aste='*';
    cout<<"ingrese un numero impar: "; cin>>n;
    condEspa=(n/2);
    condAst=1;//en principio es un asterisco
    while(condAst<=n){
        for(int i=0;i<condEspa;i++){
            cout<<espa;//se imprimen uno a uno segun la condición
        }
        for(int i=0;i<condAst;i++){
            cout<<aste;
        }
        for(int i=0;i<condEspa;i++){
            cout<<espa;
        }
        cout<<endl;
        condEspa=condEspa-1;//los espacios disminuyen de a uno en cada lado0
        condAst=condAst+2;//para quede la misma proporcion los asteriscos deben aumentar de a 2
    }
    condEspa=1;//ahora los esapcios son los que empiezan en 1
    condAst=n-2;
    while(condAst>=1){
        for(int i=0;i<condEspa;i++){
            cout<<espa;
        }
        for(int i=0;i<condAst;i++){
            cout<<aste;
        }
        for(int i=0;i<condEspa;i++){
            cout<<espa;
        }
        cout<<endl;
        condEspa=condEspa+1;//los espacios aumentan de a 1 en cada lado
        condAst=condAst-2;//para quede la misma proporcion los asteriscos deben disminuir de a 2
    }
    return 0;
}
