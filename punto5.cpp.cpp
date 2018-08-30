#include <iostream>
#include<string>


using namespace std;

string frase;

void buscar(string frase1)
{
    
    int svocales=0;
    int sconsonantes=0;
    cout<<frase1<<endl;

    for(char c : frase1)
    {
        if ((c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u') && (c != ' '))
        {
            sconsonantes = sconsonantes + 1;

        }

        if ((c == 'a')|| (c == 'e')|| (c == 'i') || (c == 'o') || (c == 'u'))
        {
            svocales = svocales + 1;

        }


    }



    cout<<"# de vocales :"<<svocales<<endl;
    cout<<"# de consonanates :"<<sconsonantes<<endl;



}



int main()
{
    cout<<"INGRESE FRASE :"<<endl;
    getline(cin,frase);

    buscar(frase);

    return 0;
}
