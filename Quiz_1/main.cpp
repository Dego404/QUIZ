#include<iostream>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int es_primo(int);
    int N;
    cout<<"Ingrese un numero:: ";cin>>N;
     unsigned int i, numero_primo=0;
    for (i=2;i==N;i++)
    {
        if (es_primo(i)==1)
        {numero_primo++;
         if (numero_primo==N)
         {
             cout <<"El enesimo primo "<< N <<" es: "<< i << endl;
         return 0;
         }
        }
    }
int m = 0;
    while(i>1){
        m +=1;
        if(i%2 ==0){
        i =i/2;}
        else{
        i = 3*i+1;}
        cout<<i<<endl;}
    cout<<"\nLa serie tiene "<<m<<" terminos"<<endl;

}
int es_primo(int i){
      unsigned int j;
      double x;
if (i%2 == 0){
         if (i==2)
         return 1;
         else
         return 0;
         }
      else {
         x=sqrt(i);
         j=3;
         while ((j<=x) && (i%j!=0))
         { j=j+2;
         }
         if (j>x)
         return 1;
         else
         return 0;
         }
      }
