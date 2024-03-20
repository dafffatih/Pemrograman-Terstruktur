#include <iostream>
using namespace std;

int main()
{
	
	int jumlah;
	cout << "Masukkan jumlah angka : "; cin >> jumlah;
	int angka[jumlah];

	for(int i = 0; i < jumlah; i++)
	{
		cout << "Masukkan angka " << i + 1 << " : "; cin >> angka[i];
	}

	for (int i = 0; i < jumlah - 1; i++) 
	{
        for (int j = 0; j < jumlah - i - 1; j++) 
		{
            if (angka[j] < angka[j + 1]) 
			{
				swap(angka[j], angka[j + 1]);
            }
        }
    }

    for(int i = 0; i < jumlah; i++)
	{
    	cout << angka[i]<< " ";
	}
	
	return 0;
}