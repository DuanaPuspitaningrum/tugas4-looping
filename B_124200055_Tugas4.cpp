#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int m, n, jumlah, total, pilih;
    cout <<" \nTugas 4 - Looping \nNama : Duana Puspitaningrum \nNIM : 124200055 \n";
    cout << "\n----------------------------------------------------------------------\n\n";
    cout << "1. perkalian";
    cout << endl;
    cout << "2. perpangkatan";
    cout << endl;
    cout << "pilih : "; cin >> pilih ;
    cout << endl;
    switch (pilih){
        case 1 :
            cout << "masukan nilai a : "; cin >> m;
            cout << "masukan nilai b : "; cin >> n;
            jumlah = 0;
            for (int loop = 1; loop <= n; loop++){
                jumlah += m;
                if (loop != n)
                {cout << m << "+";}
                else
                {cout << m << "=" << jumlah;}


            }
            break ;
        case 2 :
            cout << "masukan nilai a : "; cin >> m;
            cout << "masukan nilai b : "; cin >> n;
            jumlah = 1;
            for (int loop = 1; loop <= n; loop++){
                jumlah *= m;
                if (loop != n)
                {cout << m << "x";}
                else
                {cout << setprecision (999999) << m << "=" << jumlah;}
            }
            break ;

            default :
            cout << ("input salah!") << endl;

     cout << "\n----------------------------------------------------------------------\n\n";0


    }
    return 0;
}
