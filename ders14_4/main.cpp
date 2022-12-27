#include <iostream>

using namespace std;

float m3fiyat(int m3)
{
    return 6.38*m3;
}

float m3atikfiyat(int m3)
{
    return 1.25*m3;
}

float m3ctv(int m3)
{
    return 0.47*m3;
}

int main()
{
    int harcanan;
    cout<<"M3 miktari girin:";
    cin>>harcanan;

    float m3_tutar=m3fiyat(harcanan);
    float m3_atiksu=m3atikfiyat(harcanan);
    float m3_ctv=m3ctv(harcanan);

    float vergilitutar=m3_ctv+(m3_atiksu+m3_tutar)*1.08;


    cout<<"Odenecek tutar:"<<vergilitutar<<endl;

    return 0;
}
