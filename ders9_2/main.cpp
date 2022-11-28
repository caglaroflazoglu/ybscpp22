#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Bir sayi girin:";
    cin>>x;


    switch(x)
    {
        case 7:
            cout<<"7 sayisi girildi"<<endl;
        case 4:
            cout<<"4 sayisi girildi"<<endl;
        case 3:
            cout<<"3 sayisi girildi"<<endl;
        case 8:
            cout<<"8 sayisi girildi"<<endl;
        default:
            cout<<"Gecerli bir secim girmediniz"<<endl;
    }


    return 0;
}
