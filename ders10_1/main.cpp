#include <iostream>

using namespace std;

int main()
{
    int sayac;

    for(sayac=0;sayac<10;sayac++)
    {
        cout<<sayac<<endl;
    }

    cout<<endl<<endl;

    sayac=0;
    for(;sayac<10;)
    {
        cout<<sayac<<endl;
        sayac++;
    }
    cout<<endl<<endl;

    sayac=0;
    while(sayac<10)
    {
        cout<<sayac<<endl;
        sayac++;
    }



    return 0;
}
