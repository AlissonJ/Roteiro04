#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void jogarDado(int *dado,int n,int *quant){

    for(int a=0;a<8;a++){
        quant[a]=0;
    }
    srand( (unsigned)time(NULL) );
    for(int i = 0; i < n; i++){
        dado[i]= (1 + ( rand() % 6 ));
        cout<< dado[i]<<" ";
    }
    for(int j = 1;j<=n;j++){
        cout<<"Ultimo for \n";
        quant[dado[j]]++;
        for(int k =0;k<7;k++){
        cout<< quant[k]<< " numero "<<k;
        }
    }
}

int main(){
int entrada = 0;
cout<<"Quantas vezes o dado sera jogado: (Sair = 0) ";
cin>>entrada;
while(entrada != 0){
    int quant[7];
    int dado[entrada];
    cout<<"Primeira jogada: \n";

    jogarDado(dado,entrada,quant);
    cout<<"depois da jogada: \n";
   /* for(int j = 0;j<=entrada;j++){
        quant[dado[j]]++;
        cout<< quant[j]<< "numero"<<j;
    }
   /* for(int l =1;l<7;l++){
        cout<<"\nquantidade"<<l<<" -- " <<quant[l];
        cout<<"Porcentagem de "<<l<< quant[l];
    }*/
    cout<<"Quantas vezes o dado sera jogado: (Sair = 0) ";
    cin>>entrada;

}
return 0;
}
