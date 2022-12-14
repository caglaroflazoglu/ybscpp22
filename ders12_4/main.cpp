#include <iostream>

using namespace std;

int main()
{
    char metin[50];

    cout<<"Metni girin: ";
    cin>>metin;

    for(int i=0;i<50;i++)
    {
        if(metin[i]=='\0') // metnin son degerine gelindi mi?
        {
            break; // gelindi ise donguyu kir
        }
        if(metin[i]>='a' && metin[i]<='z')
        {
            int deger=metin[i];
            deger-=32; // buyuk harfe donustur 97-122 -> 65-90
            /*char x=deger;
            cout<<x;*/
            cout<<(char)deger;
        }
        else if(metin[i]>='A' && metin[i]<='Z')
        {
             int deger=metin[i];
             deger+=32; // kucuk harfe donustur 65-90 -> 97-122
             cout<<(char)deger;
        }
        else
        {
            cout<<metin[i];
        }
    }

    return 0;
}
