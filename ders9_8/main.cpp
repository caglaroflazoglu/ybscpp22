#include <iostream>

using namespace std;

int main()
{
    int altsinir,ustsinir,x,toplam=0,sayac=0;

    cout<<"Alt sinir:";
    cin>>altsinir;
    cout<<"Ust sinir:";
    cin>>ustsinir;

    for(x=altsinir;x<=ustsinir;x++)
    {
        if(x%2==0) // tekler icin 1
        {
            cout<<"x:"<<x<<endl;
            toplam+=x;
            sayac++;
        }
    }

    cout<<sayac<<" adet cift sayinin toplami "<<toplam<<endl;


    return 0;
}
