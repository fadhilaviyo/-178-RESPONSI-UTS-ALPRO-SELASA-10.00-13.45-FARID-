#include <iostream>
using namespace std;
struct simeru
{
	string user,fasilitas,matkul,dosen,lanjut;
	int password,butuhr,pil,kapasitas,lokasi,ruang;
	float waktu;
};

void inputruang ()
{
	simeru kelas;
	do
	{
		cout << "INPUT KELAS" << endl;
		cout << "1.Input Ruang Kelas" << endl;
		cout << "2.Keluar" << endl;
		cout << "Masukkan Pilihan Anda : ";
		cin >> kelas.pil;
		switch (kelas.pil)
		{
		case 1 :
		cout << "Ruang Kelas : ";
		cin >> kelas.ruang;
		cout << "Kapasitas Kelas (Mahasiswa): ";
		cin >> kelas.kapasitas;
		cout << "Lokasi Kelas (Lantai): ";
		cin >> kelas.lokasi;
		cin.ignore();
		cout << "Fasilitas Kelas : ";
		cin >> kelas.fasilitas;
		cin.ignore();


		break;
		}
	}
	while (kelas.pil != 2);
}

void displayruang()
{
	simeru kelas;
	cout << "RUANG KELAS" << endl;
	cout << "Ruang Kelas : " << kelas.ruang << endl;
	cout << "Kapasitas Kelas (Mahasiswa): " << kelas.kapasitas << endl;
	cout << "Lokasi Kelas (Lantai): " << kelas.lokasi << endl;
	cout << "Fasilitas Kelas : " << kelas.fasilitas << endl;
}


void tambahruang ()
{
	simeru tambah;
	do
	{
		cout << "Apakah Ingin Mengedit Ruang Kelas? (ya/tidak) ";
		cin >> tambah.lanjut;
		if (tambah.lanjut == "ya")
		{
		cout << "INPUT KELAS" << endl;
		cout << "1.Edit Ruang Kelas" << endl;
		cout << "2.Keluar" << endl;
		cout << "Masukkan Pilihan Anda : ";
		cin >> tambah.pil;
		switch (tambah.pil)
			   {
			   		case 1 :
					cout << "Ruang Kelas Baru : ";
					cin >> tambah.ruang;
					cout << "Kapasitas Kelas Baru (Mahasiswa) : ";
					cin >> tambah.kapasitas; 
					cout << "Lokasi Kelas Baru (Lantai): ";
					cin >> tambah.lokasi;
					cout << "Fasilitas Kelas Baru : ";
					cin >> tambah.fasilitas;
		break;
			  }
		}
		else 
		{
			cout << "Anda Tidak Mengedit Ruang Kelas " << endl;
		}
	}
	while (tambah.lanjut != "tidak");
}

void displayubahr()
{
	simeru tambah;
	cout << "Ruang Kelas Baru : " << tambah.ruang << endl;
	cout << "Kapasitas Kelas Baru (Mahasiswa) : " << tambah.kapasitas << endl; 
	cout << "Lokasi Kelas Baru (Lantai): " << tambah.lokasi << endl;
	cout << "Fasilitas Kelas Baru : " << tambah.fasilitas << endl;
}

void inputjadwal ()
{
	simeru jadwal;
	do
	{
		cout << "INPUT KELAS" << endl;
		cout << "1.Input Jadwal Kuliah" << endl;
		cout << "2.Keluar" << endl;
		cout << "Masukkan Pilihan Anda : ";
		cin >> jadwal.pil;
		switch (jadwal.pil)
		{
  		 case 1 :
		 cout << "Mata Kuliah : ";
  		 cin >> jadwal.matkul;
		 cout << "Dosen : ";
		 cin >> jadwal.dosen;
		 cout << "Waktu : ";
		 cin >> jadwal.waktu;
		 cin.ignore();
		 cout << "Kebutuhan Ruang : ";
		 cin >> jadwal.butuhr;
		 break;
		}
	}
	while (jadwal.pil != 2);
}

void displayjadwal()
{
	simeru jadwal;
	cout << "Mata Kuliah : " << jadwal.matkul << endl;
	cout << "Dosen : " << jadwal.dosen << endl;
	cout << "Waktu : " << jadwal.waktu << endl;
	cout << "Kebutuhan Ruang : " << jadwal.butuhr << endl;
}

void tambahjadwal ()
{
	simeru tambahj;
	do
	{
		cout << "Apakah Ingin Mengedit Jadwal Kuliah? (ya/tidak) ";
		cin >> tambahj.lanjut;
		if (tambahj.lanjut == "ya")
		{
		cout << "INPUT KELAS" << endl;
		cout << "1.Edit Jadwal Kuliah" << endl;
		cout << "2.Keluar" << endl;
		cout << "Masukkan Pilihan Anda : ";
		cin >> tambahj.pil;
		switch (tambahj.pil)
  			   {
			   	case 1 :
				cout << "Mata Kuliah Baru : ";
				cin >> tambahj.matkul;
				cout << "Dosen Baru : ";
				cin >> tambahj.dosen; 
				cout << "Waktu Baru : ";
				cin >> tambahj.waktu;
				cout << "Kebutuhan Ruang Baru : ";
				cin >> tambahj.butuhr;
				break;
			  }
		}
		else 
		{
			cout << "Anda Tidak Mengedit Jadwal Kuliah" << endl;
		}
		
	}
	while (tambahj.lanjut != "tidak");
}

void displayujadwal()
{
	simeru tambahj;
	cout << "Mata Kuliah : " << tambahj.matkul << endl;
	cout << "Dosen : " << tambahj.dosen << endl;
	cout << "Waktu : " << tambahj.waktu << endl;
	cout << "Kebutuhan Ruang : " << tambahj.butuhr << endl;
}

int main ()
{
	simeru data;
	cout << "Masukkan Username : ";
	cin >> data.user;
	cout << "Masukkan Password : ";
	cin >> data.password;
	if (data.user == "admin" && data.password == 1994)
	{
		cout << "Selamat Telah Masuk Sebagai Admin" << endl;
		inputruang();
		displayruang();
		tambahruang();
		displayubahr();
		inputjadwal();
		displayjadwal();
		tambahjadwal();
		displayujadwal;
		
		
	}
	else if(data.user == "mhs" && data.password == 1994)
	{
		cout << "Selamat Telah Masuk Sebagai Mahasiswa" << endl;
		displayjadwal();
		displayujadwal;
	}
	else
	{
		cout << "Gagal Login Coba Login Kembali" << endl;
	}
	
}
