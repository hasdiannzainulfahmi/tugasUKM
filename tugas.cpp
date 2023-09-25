#include <iostream>
using namespace std;
int main()
{
    int kendaraan,biaya;
    //meminta pengguna untuk memasukan jenis kendaraan
    cout<<"pilihlah jenis kendaraan"<<endl;
    cout<<"========================"<<endl;
    cout<<"========== parkir==="<<endl;
    cout<<"jenis kendaraan (1. roda dua || 2. roda empat) :";
    cin>>kendaraan;

    cout<<" biaya parkir"<<endl;
    cout<<"============="<<endl;;

    if (kendaraan == 1)
    {
        cout<<"jenis kendaraan adalah roda dua"<<endl;
        biaya = 2000;
    }

    else if (kendaraan == 2)
    {
        cout<<"jenis kendaraan adalah roda empat"<<endl;
        biaya = 5000;
    }
    else 
    {
        cout<<" maaf jenis kendaraan salah"<<endl;
    }
    cout<<"biaya parkir :"<<biaya<<endl;
    cout<<" terima kasih"<<endl;

    return 0;
}