#include <iostream>

using namespace std;

int main()
{
    int satirsayisi;

    cout<<"Satir sayisini girin:";
    cin>>satirsayisi;

    int maxyildiz=2*satirsayisi-1;

    for(int satir=satirsayisi;satir>0;satir--)
    {
        /*for(int bosluk=0;bosluk<(maxyildiz-(2*satir-1))/2;bosluk++)
        {
            cout<<" ";
        }*/
        for(int bosluk=0;bosluk<(satirsayisi-satir);bosluk++)
        {
            cout<<" ";
        }
        for(int yildiz=0;yildiz<(2*satir-1);yildiz++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
