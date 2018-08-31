#include<string>
#include<math.h>
#include<iostream>


using namespace std;

int base,expo;

float potencia(int base, int expo)
{
     
     if (expo == 0)
     {
         
         return 1;
         
         }
         
else
    {
     return base*(potencia(base,expo-1));
}
             
             
         
         
     
}
    

int main()
{
    
    cout<<"INGRESE BASE DEL NUMERO PARA CALCULAR LA POTENCIA: "<<endl;
    cin>>base;
    cout<<"INGRESE EXPONENTE DEL NUMERO PARA CALCULAR LA POTENCIA: "<<endl;
    cin>>expo;
    
    cout<<"LA POTENCIA DEL NUMERO ES : "<<potencia(base,expo)<<endl;;

    
    return 0;
    }
