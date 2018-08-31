#include<string>
#include<math.h>
#include<string>
#include<math.h>
#include<iostream>


using namespace std;

void exchange(int& n1, int& n2)
{
    
    cout<<"variables sin intercambiar 1: "<<n1<<" 2: "<<n2<<endl;
    int temp = n2;
    n2 = n1;
    n1 = temp;
    

    
    cout<<"variables intercambiadas 1: "<<n1<<" 2: "<<n2<<endl;
    
    }
    
void exchange(float& n1 , float& n2)
{
    cout<<"variables sin intercambiar 1: "<<n1<<" 2: "<<n2<<endl;
    float temp = n2;
    n2 = n1;
    n1 = temp;
    
    cout<<"variables intercambiadas 1: "<<n1<<" 2: "<<n2<<endl;
    
    
    
    }
    
void exchange(string& n1, string& n2)
    {
        
        cout<<"variables sin intercambiar 1: "<<n1<<" 2: "<<n2<<endl;
        string temp = n2;
        n2 = n1;
        n1 = temp;
        
        cout<<"variables intercambiadas 1: "<<n1<<" 2: "<<n2<<endl;
        
        
        
        }
    

int main()
{
     int y1 =7;
     int y2 = 17;
     
     float x1 = 6.5;
     float x2 = 7.23;
    
     string f1 = "hola";
     string f2 = "chao";
     
     exchange(f1,f2);

    
    
    return 0;
}