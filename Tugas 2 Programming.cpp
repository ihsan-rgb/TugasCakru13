#include <iostream>
using namespace std;

void Penjumlahan(){
	float A;
	float B;
	cout << "Masukkan nilai bilangan pertama\n";
	cin >> A;
	cout << "Masukkan nilai bilangan kedua\n";
	cin >> B;
	cout << "Hasil = ";
	cout << A+B ;
}

void Pengurangan(){
	float A;
	float B;
	cout << "Masukkan nilai bilangan pertama\n";
	cin >> A;
	cout << "Masukkan nilai bilangan kedua\n";
	cin >> B;
	cout << "Hasil = ";
	cout << A-B ;
}

void Perkalian(){
	float A;
	float B;
	cout << "Masukkan nilai bilangan pertama\n";
	cin >> A;
	cout << "Masukkan nilai bilangan kedua\n";
	cin >> B;
	cout << "Hasil = ";
	cout << A*B ;
}

void Pembagian(){
	float A;
	float B;
	cout << "Masukkan nilai bilangan pertama\n";
	cin >> A;
	cout << "Masukkan nilai bilangan kedua\n";
	cin >> B;
	cout << "Hasil = ";
	cout << A/B ;
}

void Perpangkatan(){
	float A;
	float B;
	cout << "Masukkan sebuah bilangan\n";
	cin >> A;
	cout << "Masukkan pangkatnya\n";
	cin >> B;
	float i = 1;
	float hasil = A;
	if(B>1){
		while(i<B){
			hasil= hasil*A;
			i = i+1;
		}
	}
	cout << "Hasil = ";
	cout << hasil;
}

void Integralst(){
	float A;
	float B;
	float Delta;

	
	cout << "Masukkan batas bawah = "; //input batas atas, bawah, dan lebar partisi
	cin >> A;
	cout << "Masukkan batas atas = ";
	cin >> B;
	cout << "Masukkan delta = ";
	cin >> Delta;
	cout << "\n";
	

		cout << "Fungsinya adalah \n" ; //fungsi sudah fix karena test case
	cout << "x^2 + x";
	cout << "\n";
	cout << "\n";

	float n = A;
	float m = A + Delta;
	float luas = 0 ;
	
	while(m<=B){                       // melakukan operasi penjumlahan luas partisi
		float y1 = (n*n + n);
		float y2 =(m + m*m);
		luas = luas + ((y1 + y2) * (Delta/2));
		m = m + Delta;
		n = n + Delta;	
	}
	
	if(m>B){
		float y1 = (n*n + n);
		float y2 = (B*B + B);
		float delta = B-n;
		luas = luas + ((y1 + y2) * (delta/2));
	}
	
	cout << "Luas daerah yang dihasilkan adalah " << luas << " satuan luas";
	
}


void Integral(){
	float A;
	float B;
	float Delta;
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float g;
	float h;
	float i;
	float j;
	
	cout << "Masukkan batas bawah = "; // input batas atas, bawah,  dan luas partisi
	cin >> A;
	cout << "Masukkan batas atas = ";
	cin >> B;
	cout << "Masukkan delta = ";
	cin >> Delta;
	cout << "\n";
	
	
	cout << "masukkan Fungsi\n"; // input fungsi pengali
	cout << "Buat fungsi pengali\n";
	cout << "Masukkan koefisien polinom (dari x^0 - x^4) \n";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d; 
	cin >> e;
	cout << "\n";
	cout << "\n";
	
		cout << "Buat fungsi pembagi\n"; // input fungsi pembagi
	cout << "Masukkan koefisien polinom (dari x^0 - x^4) \n";
	cin >> f;
	cin >> g;
	cin >> h;
	cin >> i;
	cin >> j;
	cout << "\n";
	cout << "\n";
	
	cout << "Fungsinya adalah \n" ;
	cout << a << " + " << b << "x + " << c << "x^2 + " << d << "x^3 + " << e << "x^4\n" ; 
	cout << "____________________________\n" ;
	cout << f << " + " << g << "x + " << h << "x^2 + " << i << "x^3 + " << j << "x^4\n" ; 
	cout << "\n";
	cout << "\n";
	
	float n = A;
	float m = A + Delta;
	float luas = 0 ;
	
	while(m<=B){
		float y1 = (a + b*n + c*n*n + d*n*n*n + e*n*n*n*n) / (f + g*n + h*n*n + i*n*n*n + j*n*n*n*n);  // melakukan perkalian dan penjumlahan
		float y2 =(a + b*m +c*m*m + d*m*m*m + e*m*m*m*m ) / (f + g*m + h*m*m + i*m*m*m + j*m*m*m*m);
		luas = luas + ((y1 + y2) * (Delta/2));
		m = m + Delta;
		n = n + Delta;	
	}
	
	if(m>B){
		float y1 = (a + b*n + c*n*n + d*n*n*n + e*n*n*n*n) / (f + g*n + h*n*n + i*n*n*n + j*n*n*n*n); // jika delta nya kurang maka dihitung dengan alternatif ini
		float y2 = (a + b*B*B + c*B*B +d*B*B*B + d*B*B*B*B) / (f + g*B + h*B*B + i*B*B*B + j*B*B*B*B);
		float delta = B-n;
		luas = luas + ((y1 + y2) * (delta/2));
	}
	
	cout << "Luas daerah yang dihasilkan adalah " << luas << " satuan luas";
	
}

void starter(){  // fungsi memulai kalkulator
	cout << "Pilih menu kalkulator: \n";
	cout << "1. Penjumlahan\n";
	cout << "2. Pengurangan\n";
	cout << "3. Perkalian\n";
	cout << "4. Pembagian\n";
	cout << "5. Perpangkatan (Pangkat>1)\n";
	cout << "6. Integral (Test Case x^2 + x)\n";
	cout << "7. Integral (Fungsi rasional orde maksimum 4)\n";
	
	int pilihan;
	cout << "\n";
	cin >> pilihan;
	
	if(pilihan==1){   //input mode, jika tidak valid akan mengulang dari awal
		Penjumlahan();
	} else if(pilihan==2){
		Pengurangan();
	} else if(pilihan==3){
		Perkalian();
	}else if(pilihan==4){
		Pembagian();
	}else if(pilihan==5){
		Perpangkatan();
	}else if(pilihan==6){
		Integralst();
	}else if(pilihan==7){
		Integral();
	}else{
		cout << "Input salah, mohon coba kembali\n";
		cout << "\n";
		starter();
	}
	
	cout <<"\n";
	
	
	string puas = ""; // konfirmasi apakah ingin menggunakan lagi atau tidak
	cout << "Apakah ingin melakukan perhitungan lagi?(y/n): ";
	cin >> puas;
	
	if(puas=="n"){
		cout << "\n";
		cout << "Terima kasih sudah menggunakan kalkulator ini";
	}else{
		cout << "Silahkan gunakan sekali lagi\n";
		cout << "\n";
		starter();
	}
	
}

int main(){
	starter(); // run calculator
}

