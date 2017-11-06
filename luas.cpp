#include <iostream>
using namespace std;

int main(){ 
	char pilih,k ,K ;
	int al, p, l, t, L ;
	
	cout <<"k : Persegi Panjang"<<endl;
	cout <<"K : Segitiga"<<endl;
	cout << "Luas Yang Akan Dihitung k atau K : "; cin>>pilih;
	
		if (pilih=='k'){
			system("cls");
			cout<<"Luas Persegi Pajang"<<endl;
			cout<<""<<endl;
			cout<<"Input Panjang Persegi Panjang = "; cin>>p;
			cout<<"Input Lebar Persegi Panjang = "; cin>>l;
			L=p*l;
			
			cout << " Jadi Luas Persegi Panjangnya Adalah   "<<L;
		}
		
		else if (pilih=='K'){
			system("cls");
			cout<<"Mengitung Luas Segitiga"<<endl;
			cout<<""<<endl;
			cout<<"Input Alas Segitiga = "; cin>>al;
			cout<<"Input Tinggi Segitiga = "; cin>>t;
			L=0.5*al*l;
			
			cout << " Jadi Luas segitiganya Adalah   "<<L;
		}
}
