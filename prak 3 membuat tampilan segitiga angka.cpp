//*nama Iqbal Hario Syahputra*//
//nim 20051397029//
#include<iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << endl;
    cout << "Membuat Tampilan Segitiga Angka " << endl;
    cout << endl;
    int angka;

    cout << "Masukkan Angka : "; 
	cin >> angka;

    for (int i=1; i<=angka; i++){
        for(int l=1; l<=i; l++){
            cout<<l;
        }
        cout<<endl;
    }
    for (int i=angka-1; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;

}
