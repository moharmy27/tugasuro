#include <iostream>
using namespace std;
int main(){

    int i,j,k,l,n,pangkat,koef,operasi;
    // variabel pangkat untuk penyimpanan masukan pangkat polinom dan koef untuk koefisien polinom

    // array untuk pangkat menyimpan suku suku polinom
    int pang1[100];
    int pang2[100];

    // array untuk koefisien menyimpan suku suku polinom
    int kof1[100];
    int kof2[100];

    cout<<"masukan pangkat polinomial suku pertama : ";
    cin>>pangkat;
    pang1[1] = pangkat;
// nav

    cout<<"masukan koefisien polinomial suku pertama : ";
    cin>>koef;
    kof1[1] = koef;

    l = 1;


    k = 1; // k menandakan banyaknya suku yang ada saata ini
    while(l ==1 )
    {

        cout<<"pilih salah satu operasi dibawah ini"<<endl;
        cout<<"ketik 1 untuk penjumlahan"<<endl;
        cout<<"ketik 2 untuk pengurangan"<<endl;
        cout<<"ketik 3 untuk perkalian"<<endl;
        cout<<"ketik 4 untuk turunan"<<endl;
        cout<<"ketik 5 untuk selesai"<<endl;

        cin>>operasi;
        int tanda = 1;
        if(operasi == 5) l = 0;

        if(operasi == 1)
        {
            cout<<"masukan pangkat polinomial suku yang akan menjadi penambahan : ";
            cin>>pangkat;
            cout<<"masukan koefisien polinomial suku : ";
            cin>>koef;
            for(i = 1; i <= k; i++)
            {
                if(pangkat == pang1[i])
                {
                    kof1[i] = kof1[i] + koef;
                    tanda = 0;
                }

            }
            if(tanda == 1)
            {
                k++;
                kof1[k] = koef;
                pang1[k] = pangkat;
            }

        }

        if(operasi == 2)
        {
            cout<<"masukan pangkat polinomial suku yang akan menjadi pengurang : ";
            cin>>pangkat;
            cout<<"masukan koefisien polinomial suku : ";
            cin>>koef;
            for(i = 1; i <= k; i++)
            {
                if(pangkat == pang1[i])
                {
                    kof1[i] = kof1[i] - koef;
                    tanda = 0;
                }

            }
            if(tanda == 1)
            {
                k++;
                kof1[k] = -koef;
                pang1[k] = pangkat;
            }

        }

        if(operasi == 3)
    {
        cout<<"masukan pangkat polinomial suku yang akan menjadi perkalian : ";
        cin>>pangkat;
        cout<<"masukan koefisien polinomial suku : ";
        cin>>koef;
        for(i = 1; i <= k; i++)
        {
            kof1[i] = kof1[i] * koef;
            pang1[i]= pang1[i]+pangkat;

        }

    }
        if(operasi == 4)
    {

        for(i = 1; i <= k; i++)
        {
            kof1[i]=kof1[i]*pang1[i];
            pang1[i]=pang1[i]-1;

        }

    }
        for (i=1;i<=k;i++){
            if (pang1[i]<0){
                for (j=i;j<k;j++){
                    kof1[j]=kof1[j+1];
                    pang1[j]=pang1[j+1];
                }

                k-=1;

            }
            if (kof1[i]==0){
                for (j=i;j<k;j++){
                    kof1[j]=kof1[j+1];
                    pang1[j]=pang1[j+1];
                }

                k-=1;
            }
        }

        if(k==0){
            break;
        }
        cout<<kof1[1]<<"X^"<<pang1[1];

        for(i = 2; i <= k; i++)
        {

            cout<<" + "<<kof1[i]<<"X^"<<pang1[i];
        }
        cout<<endl<<endl;
    }
}

