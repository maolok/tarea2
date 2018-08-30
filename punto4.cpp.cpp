#include <iostream>

using namespace std;

char caracter;
int tama;

void figura(int tama1, char caract1)
{
    int i,k;
    for (i=1;i<=tama1;i++)
    {

        for (k=1;k<=i;k++)
        {

            cout<<caract1;

        }

        cout<<" "<<endl;

    }


}
int main()
{
    cout<<"INGESE CARACTER :"<<endl;
    cin>>caracter;
    cout<<"INGRESE TAMANO :"<<endl;
    cin>>tama;

    figura(tama,caracter);

    return 0;
}
