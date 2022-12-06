#include <iostream>

using namespace std;

int main()
{
    int sayi,sayi1,sayi2,sayac=0,i;

    cout<<"1. sayiyi girin:";
    cin>>sayi1;
    cout<<"2. sayiyi girin:";
    cin>>sayi2;

    for(sayi=sayi1;sayi<=sayi2;sayi++)
    {
        sayac=0;

        for(i=2;i<=sayi/2;i++)
        {
            if(sayi%i==0)
            {
                sayac++;
                break; // sayi asal degil
            }
        }
        if(sayac==0)
        {
            cout<<sayi<<" sayisi asaldir"<<endl;
        }

    }




    return 0;
}
