#include <iostream>

using namespace std;

int main()
{
    int sayi;

    while(true)
    {
        cout<<"Sayi girin:";
        cin>>sayi;

        if(sayi<0 || sayi>100)
        {
            cout<<"Girilen sayi 0-100 araliginda degil"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Sayi degeri:"<<sayi<<endl;

    return 0;
}
