#include<string>
#include<math.h>
#include<iostream>


using namespace std;

float angulo,vinicial,tvuelo,maxaltura,dhorizontal;
const float g = 9.8;
const float pi = 3.1416;
float tvuelo1(float ang , float vini)
{
    float agrad = ((ang * pi)/180);
    float resultado = (((2*vini)*(sin(agrad)))/g);
	return resultado;
    }

float maxalt(float ang , float vini)
{
    float agrad = ((ang * pi)/180);
    float resultado =  (((vini*vini) * ((sin(agrad))*(sin(agrad))))/(2*g));
    return resultado;
    }

float dhorizo(float ang , float vini)
{
    float agrad = ((ang * pi)/180);
    float resultado = ((vini*vini)*(sin(2*agrad))/g);

    return resultado;
    }
    
    void resultados(float tvu, float maxalt, float dho)
    {
    cout<<"EL TIEMPO DE VUELO ES :"<<tvu<<" SEGUNDOS"<<endl;
    cout<<"ALTURA MAXIMA ALCANZADA :"<<maxalt<<" METROS"<<endl;
    cout<<"DISTANCIA HORIZONTAL ES :"<<dho<<" METROS"<<endl;
        
        }

int main()
{
    cout<<"INGRESE ANGULO(GRADOS) :"<<endl;
    cin>>angulo;
    cout<<"INGRESE VELOCIDAD INICIAL(M/S) :"<<endl;
    cin>>vinicial;

    tvuelo = tvuelo1(angulo,vinicial);
    maxaltura = maxalt(angulo,vinicial);
    dhorizontal = dhorizo(angulo,vinicial);
    
    resultados(tvuelo,maxaltura,dhorizontal);
    

    


    return 0;
}
