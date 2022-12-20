#include <iostream>

using namespace std;

void yazdir(string metin,bool altsatir)
{
    cout<<metin;
    if(altsatir){
        cout<<endl;
    }
}


int sayigetir(string metin)
{
    int sayi;
    yazdir(metin,false);
    cin>>sayi;
    return sayi;
}

void teksayilariyaz()
{
    int sayi1=sayigetir("Sayi-1: ");
    int sayi2=sayigetir("Sayi-2: ");

    for(int i=sayi1;i<=sayi2;i++)
    {
        if(i%2==1)
        {
            //cout<<i<<" sayisi tektir"<<endl;
            yazdir(to_string(i)+" sayisi tektir", true);
        }

    }
}

bool asalmi(int sayi)
{
    for(int i=2;i<=sayi/2;i++)
    {
        if(sayi%i==0)
        {
            return false;
        }
    }
    return true;
}

int basamaktoplam(int sayi)
{
    //cout<<"sayi: "<<sayi<<endl<<endl;
    //int sayidegeri=sayi;

    int toplam=0;
    while(sayi>0)
    {
        int birler = sayi%10;
        sayi-=birler; // sayi=sayi-birler;
        sayi/=10; // sayi=sayi/10;
        //cout<<birler<<endl;
        toplam+=birler;
    }

    //cout<<sayidegeri<<" sayinin basamaktaki rakamlar toplami "<<toplam<<endl;
    return toplam;
}

void asalsayilar()
{
    int sayi1=sayigetir("Sayi-1: "); //10
    int sayi2=sayigetir("Sayi-2: "); //20

    for(int sayi=sayi1;sayi<=sayi2;sayi++)
    {
        if(asalmi(sayi))
        {
            //cout<<sayi<<" sayisi asaldir ve ";
            yazdir(to_string(sayi)+" sayisi asaldir ve ", false);

            //cout<<"basamaklardaki rakamlarin toplami "<< basamaktoplam(sayi);
            yazdir("basamaklardaki rakamlarin toplami " + to_string(basamaktoplam(sayi)), true);
            //cout<<endl;

        }
    }

}

int main()
{
    int secim;
    do{
        //cout<<"1) Asal sayilari bul"<<endl;
        //cout<<"2) Tek sayilari bul"<<endl;
        //cout<<"3) Cikis"<<endl;
        yazdir("1) Asal sayilari bul",true);
        yazdir("2) Tek sayilari bul",true);
        yazdir("3) Cikis",true);
        secim=sayigetir("Secim Yapiniz: ");

        switch(secim)
        {
            case 1:
                asalsayilar();
                break;
            case 2:
                teksayilariyaz();
                break;
            case 3:
                //cout<<"Program sonlandiriliyor"<<endl;
                yazdir("Program sonlandiriliyor",true);
                break;
            default:
                //cout<<"Gecerli bir secim yapmadiniz!"<<endl;
                yazdir("Gecerli bir secim yapmadiniz!",true);
        }

    }while(secim!=3);
    return 0;
}
