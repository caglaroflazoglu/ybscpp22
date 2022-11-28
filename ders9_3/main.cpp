#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Bir rakam girin:";
    cin>>x;


    switch(x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            cout<<"Girilen rakam tek"<<endl;
            break;
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
            cout<<"Girilen rakam cift"<<endl;
            break;
        default:
            cout<<"Gecerli bir secim girmediniz"<<endl;
    }


    return 0;
}
