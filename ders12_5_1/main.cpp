#include <iostream>

using namespace std;

int main()
{
    int araliklar[]={90,80,70,65,60,55,50,40,0};
    string harfler[]={"AA","BA","BB","CB","CC","DC","DD","FD","FF"};

    int ogrsay;

    cout<<"Ogrenci sayisini giriniz:";
    cin>>ogrsay;

    int vizenot[ogrsay],finalnot[ogrsay],ort[ogrsay];

    for(int i=0;i<ogrsay;i++)
    {
        cout<<(i+1)<<". ogrencinin"<<endl;
        cout<<"vize notu:";
        cin>>vizenot[i];
        cout<<"final notu:";
        cin>>finalnot[i];

        ort[i] = (vizenot[i]*0.4+finalnot[i]*0.6)+0.5; // +0.5 yuvarlama icin

        cout<<endl;
    }

    int araliksinir=sizeof(araliklar)/sizeof(int);

    for(int ogr=0;ogr<ogrsay;ogr++)
    {
        //ogrencinin finali 30 dan kucuk ise FF

        if(finalnot[ogr]<30)
        {
            cout<<(ogr+1)<<". ogrencinin vize:"<<vizenot[ogr];
            cout<<" final:"<< finalnot[ogr];
            cout <<" ort:"<< ort[ogr]<<" harf: FF"<<endl;
        }
        else
        {
            for(int i=0;i<araliksinir;i++)
            {
                if(ort[ogr]>=araliklar[i])
                {
                    cout<<(ogr+1)<<". ogrencinin vize:"<<vizenot[ogr];
                    cout<<" final:"<< finalnot[ogr];
                    cout <<" ort:"<< ort[ogr]<<" harf: "<<harfler[i]<<endl;
                    break;
                }
            }
        }

    }

    return 0;
}
