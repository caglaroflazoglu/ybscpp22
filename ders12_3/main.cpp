#include <iostream>

using namespace std;

int main()
{

    char metin[20];
    cout<<"Metni girin: ";
    cin>>metin;

    for(int i=0;i<20;i++)
    {
        if(metin[i]=='\0'){ // karakterler bitti
            break;
        }
        int deger = metin[i];
        // if(deger>='a' && deger<='z')
        if(deger>96 && deger<123) //a=>97,z=>122
        {
            cout<<metin[i]<<"->kucuk harf"<<endl;
        }
        if(deger>64 && deger<91) //A=>65,Z=>90
        {
            cout<<metin[i]<<"->buyuk harf"<<endl;
        }
        /*if(deger>47 && deger<58) //0=>48,9=>57
        {
            cout<<metin[i]<<"->rakam"<<endl;
        }*/

        if(deger>='0' && deger<='9')
        {
            cout<<metin[i]<<"->rakam"<<endl;
        }
    }


    return 0;
}
