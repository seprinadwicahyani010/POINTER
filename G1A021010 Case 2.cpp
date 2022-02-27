#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 10;
	int b = 15;
	int c = 27;
	int *p1;
	int *p2;
	int *p3;

	p1 = &a;
	p2 = &b;
	*p1 = c;
	a = *p2;
	b = 6;
	p3 = &b;
	p3 = &c;
	*p1 = *p3;

	cout<<"Nilai variabel a : "<<a<<endl;
	cout<<"Nilai variabel b : "<<b<<endl;
	cout<<"Nilai variabel c : "<<c<<endl;
	cout<<"Alamat dari p1 : "<<p1<<endl;
	cout<<"Alamat dari p2 : "<<p2<<endl;
	cout<<"Alamat dari p3 : "<<p3<<endl;
	cout<<"Nilai yang tersimpan pada alamat p1 : "<<*p1<<endl;
	cout<<"Nilai yang tersimpan pada alamat p2 : "<<*p2<<endl;
	cout<<"Nilai yang tersimpan pada alamat p3 : "<<*p3<<endl;
	
	return 0;
}
