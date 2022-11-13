#include <iostream>

using namespace std;

int main()
{
    int vizenot,finalnot;
    float ortalama;

    cout<<"Vize:";
    cin>>vizenot;

    cout<<"Final:";
    cin>>finalnot;

    ortalama = vizenot*0.4+finalnot*0.6;
    /*
    O.5 ve uzeri ondalik ile biten sayilari yukariya yuvarliyoruz
    */
    int yuvarlanmis = ortalama+0.5;

    cout<<"yuvarlanmamis:"<<ortalama<<" yuvarlanmis:"<<yuvarlanmis<<endl;

    if(finalnot>=30 && yuvarlanmis>=60)
    {
        cout<<yuvarlanmis<<" ortalama ile gectiniz!"<<endl;
    }
    else
    {
        cout<<"Kaldiniz!"<<endl;
    }




    return 0;
}
