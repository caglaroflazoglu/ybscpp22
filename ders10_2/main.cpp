#include <iostream>

using namespace std;

int main()
{
    int sayi=-1;

    while(!(sayi>=0 && sayi<=100)){ // while(sayi<0 || sayi>100)

        cout<<"Sayi girin:";
        cin>>sayi;
    }

    cout<<"Sayi degeri:"<<sayi<<endl;

    return 0;
}
