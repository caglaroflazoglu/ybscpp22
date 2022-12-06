#include <iostream>

using namespace std;

int main()
{
    int sayi[5];

    int i;

    for(i=0;i<5;i++)
    {
        cout<<(i+1)<<". sayi:";
        cin>>sayi[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<(i+1)<<". sayi: "<<sayi[i]<<endl;
    }

    return 0;
}
