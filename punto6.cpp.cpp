#include<string>
#include<math.h>
#include<iostream>


using namespace std;

int n1,n2,n3,n4,n5,n6;
int temp1,temp2,temp3,temp4,nummayor;

int nmayor (int n1, int n2)
{

    if (n1>n2)
    {
        return n1;

        }

        else {return n2;}





    }

int main()
{

    cout<<"INGRESE # 1 :"<<endl;
    cin>>n1;
    cout<<"INGRESE # 2 :"<<endl;
    cin>>n2;
    cout<<"INGRESE # 3 :"<<endl;
    cin>>n3;
    cout<<"INGRESE # 4 :"<<endl;
    cin>>n4;
    cout<<"INGRESE # 5 :"<<endl;
    cin>>n5;
    cout<<"INGRESE # 6 :"<<endl;
    cin>>n6;


   temp1 = nmayor(n1,n2);
   temp2 = nmayor(n3,n4);
   temp3 = nmayor(n5,n6);
   temp4 = nmayor(temp1,temp2);
   nummayor = nmayor(temp3,temp4);

   cout<<"EL # MAYOR ES :"<<nummayor<<endl;


    return 0;
}
