#include <iostream>
using namespace std;

int main ()
{
	int x,y,hasil;
	
	cout <<"---Program Menentukan hasil perkalian Positif atau negatif by @ Zulfikar---"<<endl;
	
	cout <<"\nMasukan nilai x = ";
	cin >>x;
	
	cout << "\nMasukan nilai y = ";
	cin >>y;
	
	// script menentukan positif negatif
	
	hasil = x * y ;
	
	if (hasil >= 0)
	{
		cout <<"\nhasil dari perkalian bilangan tersebut adalah bilangan positif senilai = "<<hasil;
	}
	
	else
	{
		cout <<"\nhasil dari perkalian bilangan tersebut adalah bilangan negatif senilai = "<<hasil;
	}
	return 0;
}
