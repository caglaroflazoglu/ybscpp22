#include <iostream>

using namespace std;

int main()
{
    int sayac=0;

    while(sayac<10)
    {
        cout<<sayac<<endl;
        sayac++;
    }

    sayac=0;
    do{
        cout<<sayac<<endl;
        sayac++;
    }while(sayac<10);

    return 0;
}
