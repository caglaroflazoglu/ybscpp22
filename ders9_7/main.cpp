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
        cout<<"x:"<<x<<endl;
        toplam+=x;
        sayac++;
    }

    cout<<sayac<<" adet sayinin toplami "<<toplam<<endl;


    return 0;
}
