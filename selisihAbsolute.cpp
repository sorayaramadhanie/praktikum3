#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int k,l,selisih;
	cout<<" Input Bilangan x : "; cin>>k;
	cout<<" Input Bilangan y : "; cin>>l;

if (k>l){
	selisih=k-l;
	
	cout<<"Selisih Nilai X dan Y yaitu "<<selisih;
}

else if (l>k){
	selisih=l-k;

	cout<<"Selisih Nilai Y dan X yaitu "<<selisih;
}
	return 0;
}
