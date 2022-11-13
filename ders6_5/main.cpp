#include <iostream>

using namespace std;

int main()
{
    int sayi1,sayi2;

    cout<<"Sayi-1:";
    cin>>sayi1;

    cout<<"Sayi-2:";
    cin>>sayi2;

    if(sayi1>sayi2)
    {
        cout<<sayi1<<", "<<sayi2<<" sayisindan buyuktur"<<endl;
    }

    if(sayi1<sayi2)
    {
        cout<<sayi1<<", "<<sayi2<<" sayisindan kucuktur"<<endl;
    }

    if(sayi1==sayi2)
    {
        cout<<sayi1<<", "<<sayi2<<" sayisina esittir"<<endl;
    }

    return 0;
}
