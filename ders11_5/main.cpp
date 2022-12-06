#include <iostream>
#include <math.h> // sqrt // karekok

using namespace std;

int main()
{
    int ogrsay;


    cout<<"Ogrenci sayisi:";
    cin>>ogrsay;

    int vizenot[ogrsay],finalnot[ogrsay];
    float ortalama[ogrsay];

    for(int i=0;i<ogrsay;i++)
    {
        cout<<(i+1)<<". ogrencinin"<<endl;
        cout<<"Vize: ";
        cin>>vizenot[i];
        cout<<"Final: ";
        cin>>finalnot[i];
    }

    float sinifort=0;

    for(int i=0;i<ogrsay;i++)
    {
        ortalama[i]=vizenot[i]*0.4+finalnot[i]*0.6;

        cout<<(i+1)<<". ogrencinin vize: "<<vizenot[i];
        cout<<" final: "<<finalnot[i];
        cout<<" ortalama: "<<ortalama[i]<<endl;

        sinifort+=ortalama[i];
    }

    sinifort/=ogrsay;

    cout<<"Sinif ortalamasi: "<<sinifort<<endl;

    float sapma=0;

    for(int i=0;i<ogrsay;i++)
    {
        sapma+=(ortalama[i]-sinifort)*(ortalama[i]-sinifort);
    }
    sapma/=ogrsay;

    sapma=sqrt(sapma);


    for(int i=0;i<ogrsay;i++)
    {
        cout<<(i+1)<<". ogrencinin T:"<<(60+10*(ortalama[i]-sinifort)/sapma)<<endl;
    }


    return 0;
}
