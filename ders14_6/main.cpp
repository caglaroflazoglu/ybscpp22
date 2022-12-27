#include <iostream>

using namespace std;

int main()
{
    int satirsayisi;

    cout<<"Satir sayisini girin:";
    cin>>satirsayisi;

    for(int satir=0;satir<satirsayisi;satir++)
    {
        for(int yildiz=0;yildiz<(satirsayisi-satir);yildiz++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    cout<<endl<<endl;

    for(int satir=satirsayisi;satir>0;satir--)
    {
        for(int yildiz=0;yildiz<satir;yildiz++)
        {
            cout<<"*";
        }
        cout<<endl;
    }




    return 0;
}
