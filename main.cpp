#include <iostream>
#include <string.h>
using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    cout<<"Iveskite savo varda: ";
    string vardas;
    cin>>vardas;
    cout<<endl;

    string sveik;

        if (vardas[vardas.length()-1]=='s') sveik="Sveikas, ";
        else sveik="Sveika, ";

    for (auto i=0; i<vardas.length()+sveik.length()+4; i++) cout<<"*"; //pirma eilute zvaigzduciu per visa ilgi
    cout<<endl;

    cout<<"*";
    for (auto i=0; i<vardas.length()+sveik.length()+2; i++) cout<<" "; //antra eilute su tarpu
    cout<<"*"<<endl;

    cout<<"* "<<sveik<<vardas<<" *"<<endl; //pasisveikinimas

    cout<<"*";
    for (auto i=0; i<vardas.length()+sveik.length()+2; i++) cout<<" "; //eilute su tarpu
    cout<<"*"<<endl;

    for (auto i=0; i<vardas.length()+sveik.length()+4; i++) cout<<"*";//eilute zvaigzduciu per visa ilgi

    cout<<endl;

    return 0;
}
