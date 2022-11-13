#include <iostream>

using namespace std;

int main()
{
    int mesafe, secim;
    float aracintuketimi, tuketilenlt;

    cout<<"Gidilecek mesafe:";
    cin>>mesafe;

    cout<<"100km de harcanan yakit miktari:";
    cin>>aracintuketimi;

    tuketilenlt=mesafe*0.01*aracintuketimi;

    cout<<endl<<endl;
    cout<<"Yakit turu:"<<endl;
    cout<<"1) Benzin"<<endl;
    cout<<"2) Dizel"<<endl;
    cout<<"Seciniz:";
    cin>>secim;

    if(secim==1)
    {   // benzin 23.04tl/lt
        cout<<"Benzin tutari:"<<23.04*tuketilenlt<<endl;
    }
    else
    {   // dizel 26.74tl/lt
        cout<<"Dizel tutari:"<<26.74*tuketilenlt<<endl;
    }





    return 0;
}
