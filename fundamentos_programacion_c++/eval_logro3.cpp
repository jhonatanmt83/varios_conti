#include <iostream>
#include <math.h>
using namespace std;
int main(){
  float A, B, C;
  int SW1, SW2, MIO, LED1, LED2, X, Y;
  int K, I, N, J, F, O;
  F=6;
  J= 6;
  SW1=1;
  SW2=0;
  MIO=20;
  LED1=2;
  LED2=10;
  cout << "Ingrese Valor de A: ";
  cin >> A;
  cout << "Ingrese Valor de B: ";
  cin >> B;
  cout << "Ingrese Valor de C: ";
  cin >> C;
  if (A>B){
    // Codigo de 1
    while (SW2==0){
      float NL,TL,P,AC,RA,APO,AP, PI;
      PI=3.1416;
      Y=19;
      cout << "Ingrese valor de NL: ";
      cin >> NL;
      cout << "Ingrese valor de TL: ";
      cin >> TL;
      P=NL*TL;
      AC=360/NL;
      RA=AC*(PI/180);
      APO=TL/(2* tan(RA/2) );
      AP=(P*APO)/2;
      SW2=1;
      cout << "AP: " << AP;
    }
  }
  if (A<B){;
    // Codigo de 2
    for (I=1; I>=F; I--){
      for(K=1; K>=J; K++) cout << K;
      for (N=1; N>=6; N++){
        O=(N+1)-N;
        cout << O;
      }
    }
  }
  if (C==A){
    // Codigo de 3
    int num = 1, x;
    for (x=9; x>=1; x--){
      for (int y=1; y<=x; y++) cout << num << " ";
      num++;
      cout << endl;//Opcional puede quitarse para no ver los saltos de linea
    }
  }
  if (C!=B){
    cout << "Termine el Curso :)!" << endl;
  }
  return 0;
  // Programador: Mosquera Tabra Jhonatan
}