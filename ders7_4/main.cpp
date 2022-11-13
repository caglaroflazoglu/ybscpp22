#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin:";
    cin>>sayi;

    if(sayi%2==1)
    {
        cout<<"Sayi tek"<<endl;
    }
    else
    {
        cout<<"Sayi cift"<<endl;
    }

    int birler,onlar=0,yuzler=0;

    birler=sayi%10;

    sayi-=birler;
    sayi/=10;
    onlar=sayi%10;

    sayi-=onlar;
    sayi/=10;
    yuzler=sayi%10;

    cout<<"birler:"<<birler<<endl;
    cout<<"onlar:"<<onlar<<endl;
    cout<<"yuzler:"<<yuzler<<endl;

    if(sayi>9)
    {
        cout<<"binler basamagi hesabimiz yoktur!"<<endl;
    }



    return 0;
}
