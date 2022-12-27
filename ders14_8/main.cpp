#include <iostream>

using namespace std;

int main()
{
    int elemansay;

    cout<<"Girilecek eleman sayisi:";
    cin>>elemansay;

    int sayilar[elemansay];
    for(int say=0;say<elemansay;say++)
    {
        cout<<(say+1)<<". sayiyi girin:";
        cin>>sayilar[say];
    }
    cout<<endl<<endl;
    int enbuyuk,enkucuk;
    enkucuk=sayilar[0]; // baslangic degerlerini dizinin ilk elemanindan sectik
    enbuyuk=sayilar[0];

    for(int say=0;say<elemansay;say++)
    {
        if(say>0)
        {
            cout<<"-";
        }
        cout<<sayilar[say];
        if(enbuyuk<sayilar[say])
        {
            enbuyuk=sayilar[say];
        }
        if(enkucuk>sayilar[say])
        {
            enkucuk=sayilar[say];
        }
    }
    cout<<endl;
    cout<<"Dizi icerisindeki en buyuk sayi: "<<enbuyuk<<" en kucuk sayi:"<<enkucuk<<endl;

    return 0;
}
