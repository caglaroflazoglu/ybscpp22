#include <iostream>

using namespace std;

int main()
{
    int satirsay;
    char ch;
    cout<<"Satir sayisi: ";
    cin>>satirsay;
    cout<<"Karakter girin: ";
    cin>>ch;

    for(int i=0;i<satirsay;i++)
    {
        int yildizsay=2*i+1;
        int bosluksay=(satirsay-1)*2+1-yildizsay;

        for(int b=0;b<bosluksay;b++)
        {
            cout<<" ";
        }

        for(int y=0;y<yildizsay;y++)
        {
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}
