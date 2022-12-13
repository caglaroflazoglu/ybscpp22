#include <iostream>

using namespace std;

int main()
{
    //setlocale(LC_ALL,"Turkish");

    char isim[20];

    cout<<"Isminizi yaziniz: ";
    cin>>isim;

    cout<<"İsminiz: "<<isim<<endl;

    int sayac=0;

    for(int i=0;i<20;i++)
    {
        if(isim[i]=='\0') // kelimenin sonu
            break;

        cout<<i<<".:"<<isim[i]<<endl;

        if(isim[i]=='a')
            sayac++;
    }

    cout<<isim<<" kelimesinde "<<sayac<<" tane a harfi var"<<endl;



    return 0;
}
