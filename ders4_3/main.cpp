#include <iostream>

using namespace std;

int main()
{
    // https://t.me/+zSq3m9e3fQhiMDc8

    int vizenot,finalnot;

    cout<<"Vize:";
    cin>>vizenot;

    cout<<"Final:";
    cin>>finalnot;

    float ort = vizenot*0.4+finalnot*0.6;
    int yuvarlama = ort+0.5;

    cout<<"Vize:"<<vizenot;
    cout<<" Final:"<<finalnot;
    cout<< " Ortalama:"<<ort<<endl;
    cout<< "Yuvarlanmis Ortalama:"<<yuvarlama<<endl;




    return 0;
}
