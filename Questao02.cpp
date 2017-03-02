#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;



int numAleatorio(){
    srand(time(NULL));
    int random;

    random = (rand() % 100 + 1);
    return random;
}


int main(){
    int entrada, aux;
    int c = 0;
    aux= numAleatorio();
    cout<< numAleatorio();
    cout<< "Adivinhe o numero entre 1 e 100 \n";
    cout<<"Insira a primeira tentativa: ";
    cin>>entrada;
    while(c != 1){
            if(entrada == aux){
                cout<< "Parabens. Voce adivinhou o numero.";
                c=1;
                break;
            }
            if(entrada < aux){
                cout<< "Muito baixo. Tente novamente";
            }
            if(entrada > aux){
                cout<< "Muito alto. Tente novamente";
            }
            cout<< " \ninforme outra tentativa: ";
            cin>>entrada;
    }
    return 0;
}
