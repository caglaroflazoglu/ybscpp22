#include <iostream>

using namespace std;

int main()
{

    int sayi,sayac1,sayac2;

    cout<<"Sayi:";
    cin>>sayi;

    for(sayac1=1;sayac1<=sayi;sayac1++)
    {
        cout<<sayac1<<"->";

        for(sayac2=0;sayac2<=sayac1;sayac2++)
        {
            if(sayac2>0)
                cout<<"-";

            cout<<sayac2;
        }


        cout<<endl;
    }


    return 0;
}
