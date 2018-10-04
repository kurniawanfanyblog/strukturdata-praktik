#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

	class Rata_rata_Std_Deviasi {
	friend ostream& operator<<(ostream&, Rata_rata_Std_Deviasi&);
	friend istream& operator>>(istream&, Rata_rata_Std_Deviasi&);
	
	public:
	float rata();
	float STD();
	private:
	long sqrt(int n) { return(n*n); }
	int n; 
	int A[20]; 
	};

	istream& operator>>(istream& in, Rata_rata_Std_Deviasi & a){
	cout << "Banyaknya data : ";
	cin >> a.n;
	for (int i = 0; i < a.n; i++){
		cout << "Masukkan data ke- : " << i+1 << " > ";
		cin >> a.A[i];
	}
	return in;
	}

	float Rata_rata_Std_Deviasi ::rata(){
		float total=0;
	for (int i = 0; i<n; i++) total = total + A[i];
		return(total/n);
	}

	float Rata_rata_Std_Deviasi::STD (){
		 float rerata = rata();
	float jumlah=0.0;
	for (int i = 0; i<n; i++)
		jumlah = jumlah + sqrt(A[i] - rerata);
	return(sqrt (jumlah/(n-1)));
	}

	ostream& operator<<(ostream& out, Rata_rata_Std_Deviasi& a) {
	cout <<"\nRata-rata dari " << a.n;
	cout<<"\nBilangan adalah : " << a.rata();
	cout <<"\nStandar deviasi = " << a.STD();
	
	return out;
	}

	int main() {
	Rata_rata_Std_Deviasi  run;
	cin >> run;
	cout << run;
	return 0;
}

