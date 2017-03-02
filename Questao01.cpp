#include<iostream>
using namespace std;

int main(){
    int maior =0,entrada;
    cout<< "Informe o primeiro valor: ";
    cin>>entrada;
        while(entrada != 0){
        if(entrada > maior){
            maior=entrada;
        }
        cout<<"Informe outro valor: ";
        cin>>entrada;
    }
    cout<<"O maior valor: " << maior;
    return 0;
}
