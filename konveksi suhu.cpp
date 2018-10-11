#include <stdio.h>
#include <conio.h>
#include <iostream>
   
        using namespace std;
 
int main ()
{
    //Deklarasi Variable
    int Suhu,NilaiY ;
   
    //Input Tampilan
    cout<<" Masukkan Suhu : " ; cin>>Suhu ;
    cout<<" Masukkan Nilai Y : " ; cin>>NilaiY ;
    cout<<endl ;
   
    //Perhitungan Variable
    if (( Suhu > NilaiY )) cout<<"Suhu Panas" ;
   
    if (( Suhu <= NilaiY )) cout<<"Suhu Dingin" ;
   
    return 0 ;
 
}
