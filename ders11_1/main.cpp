#include <iostream>

using namespace std;

int main()
{
    int sayi, sayac=0;
    cout<<"Sayi:";
    cin>>sayi;

    for(int i=2; i<=sayi/2; i++)
    {
        if(sayi%i==0){
            sayac++;
            cout<<i<<endl;
        }
    }

    if(sayac==0)
    {
        cout<<sayi<<" asaldir"<<endl;
    }else
    {
         cout<<sayi<<" asal degildir"<<endl;
    }



    return 0;
}
