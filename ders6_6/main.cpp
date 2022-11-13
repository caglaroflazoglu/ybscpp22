#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin:";
    cin>>sayi;

    if(sayi%2==0)
    {
        cout<<sayi<<" sayisi cifttir"<<endl;
    }
    else
    {
        cout<<sayi<<" sayisi tektir"<<endl;
    }

    return 0;
}
