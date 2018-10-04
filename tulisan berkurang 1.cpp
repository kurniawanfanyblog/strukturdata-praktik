#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	string kalimat;
	cout<<"Fany Kurniawan - Informatika C\n\n";
	cout<<"Masukkan kalimat : ";
	cin>>kalimat;
	cout<<endl;
	cout<<"Hasil : \n\n";
	int A=kalimat.length()-1;
	for(A;A>=0;A--){
		for(int B=0;B<=A;B++){
			cout<<kalimat[B];
		}
		cout<<endl;
	}
	//getch();
	return 0;
}
