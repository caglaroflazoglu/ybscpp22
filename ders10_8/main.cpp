#include <iostream>

using namespace std;

int main()
{
    int secim;

    do{
        cout<<"..::MENU::.."<<endl;
        cout<<"1) Cember alani"<<endl;
        cout<<"2) Dikdortgenin alani"<<endl;
        cout<<"3) Ucgenin alani"<<endl;
        cout<<"4) Cikis"<<endl;

        cout<<endl<<"Secim:";
        cin>>secim;

        switch(secim)
        {
            case 1:
                int r;
                cout<<"Yaricap girin:";
                cin>>r;
                cout<<r<<" yaricapi icin cemberin alani "<<(3.14*r*r)<<endl;
                break;
            case 2:
                int kenar1,kenar2;
                cout<<"Kenar-1:";
                cin>>kenar1;
                cout<<"Kenar-2:";
                cin>>kenar2;

                cout<<"Kenar-1:"<<kenar1;
                cout<<" Kenar-2:"<<kenar2;
                cout<<" icin dikdortgenin alani "<<(kenar1*kenar2)<<endl;
                break;
            case 3:
                int taban,yukseklik;
                cout<<"Taban:";
                cin>>taban;
                cout<<"Yukseklik:";
                cin>>yukseklik;

                cout<<"Taban:"<<taban;
                cout<<" Yukseklik:"<<yukseklik;
                cout<<" icin ucgenin alani "<<(taban*yukseklik*0.5)<<endl;
                break;
            case 4:
                cout<<"Cikis yapiliyor"<<endl;
                break;
            default:
                cout<<"Gecerli bir secim girmediniz"<<endl<<endl;

        }

    }while(secim!=4);


    return 0;
}
