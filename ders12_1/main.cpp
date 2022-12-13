#include <iostream>

using namespace std;

int main()
{

    float ogrenci[5][3]; // 5 ogrenci, 3 bilgi (vize,final,ortalama)

    /*ogrenci[0][0]=50; //1. ogrencinin vizesi
    ogrenci[0][1]=60; //1. ogrencinin finali

    ogrenci[1][0]=60; //2. ogrencinin vizesi
    ogrenci[1][1]=90; //2. ogrencinin finali

    ogrenci[2][0]=30; //3. ogrencinin vizesi
    ogrenci[2][1]=50; //3. ogrencinin finali

    ogrenci[3][0]=80; //4. ogrencinin vizesi
    ogrenci[3][1]=50; //4. ogrencinin finali

    ogrenci[4][0]=90; //5. ogrencinin vizesi
    ogrenci[4][1]=70; //5. ogrencinin finali*/


    for(int i=0;i<5;i++)
    {
        cout<<(i+1)<<". ogrencinin"<<endl;
        cout<<"vizesi:";
        cin>>ogrenci[i][0];
        cout<<"finali:";
        cin>>ogrenci[i][1];

        ogrenci[i][2]=ogrenci[i][0]*0.4+ogrenci[i][1]*0.6; // i. ogrencinin ortalamasi
    }


    for(int i=0;i<5;i++)
    {
        cout<<(i+1)<<". ogrencinin vizesi: "<<ogrenci[i][0];
        cout<<" finali: "<<ogrenci[i][1];
        cout<<" ortalamasi: "<<ogrenci[i][2]<<endl;
    }



    return 0;
}






