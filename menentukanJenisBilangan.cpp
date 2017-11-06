#include<iostream>
using namespace std;

int main(){
	int p;
	cout<<"Input Bilangan : ";cin>>p;
	cout<<""<<endl;
	if (p < 0)
	{
		cout<<"anda input adalah bilangan negatif"<<endl;
	}
	
	else if (p>0)
	{
		cout<<"anda input adalah bilangan positif"<<endl;
	}
	else if (p==0)
	
		cout<<"anda input adalah bilangan nol "<<endl;

	return 0;
}
