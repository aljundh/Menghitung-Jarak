#include <iostream>
using namespace std;

float jarak (int vo, int a, int t);

float jarak (int vo, int a, int t){
	float hasil;
	hasil = (vo*t) + (0.5  * t *t * a);
	return hasil;
}

int main(){
	int vo, a, t;
	float distance;
	cout << "Kecepatan awal : " ;
	cin>>vo;
	cout << "percepatan : " ;
	cin>>a;
	cout<< "Waktu : " ;
	cin>>t;
	
	distance = jarak(vo,a,t);
	cout<< "Jarak = " << distance;
	
	return 0;
}
