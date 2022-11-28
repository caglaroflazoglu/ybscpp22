#include <iostream>

using namespace std;

int main()
{
    int sinir,i;
    int toplam=0;

    cout<<"Ust sinir degerini girin:";
    cin>>sinir;

    for(i=1;i<=sinir;i++)
    {
        toplam+=i;
    }

    cout<<"Toplam:"<<toplam<<endl;

    return 0;
}
