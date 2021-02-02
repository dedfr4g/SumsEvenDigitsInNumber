#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
	int f;
	cin >> f;
	if (f > 0 && f < 100)
	{
		int k = f / 10;
		int l = f % 10;
		if (k % 2 == 0 && l % 2 == 0)
		{
			int g = k + l;
			cout<<"Zbir parnih cifara u broju je: " << g << endl;
		}
		if (k % 2 == 0 && l % 2 != 0)
		{
			cout<<"Zbir parnih cifara u broju je: " << k << endl;
		}
		if (k % 2 != 0 && l % 2 == 0)
		{
			cout<<"Zbir parnih cifara u broju je: " << l << endl;
		}
		else if(k%2!=0 && l%2!=0)
		{
			cout << "Nema cifre koji je paran broj." << endl;
		}
	}
	if (f >= 100 && f < 1000)
	{
		int k = f / 100;
		int l = f % 100;
		int z = l / 10;
		int y = l % 10;
		if (k % 2 == 0 && z % 2 == 0 && y % 2 == 0)
		{
			cout<<"Zbir parnih cifara u broju je: " << k + z + y << endl;
		}
		if (k % 2 == 0 && z % 2 == 0 && y % 2 != 0)
		{
			cout << "Zbir parnih cifara u broju je: " << k + z << endl;
		}
		if (k % 2 == 0 && z % 2 != 0 && y % 2 == 0)
		{
			cout<<"Zbir parnih cifara u broju je: " << k + y << endl;
		}
		if (k % 2 != 0 && z % 2 == 0 && y % 2 == 0)
		{
			cout << "Zbir parnih cifara u broju je: " << z + y << endl;
		}
		if (k % 2 == 0 && z % 2 != 0 && y % 2 != 0)
		{
			cout<< "Zbir parnih cifara u broju je: " << k  << endl;
		}
		if (k % 2 != 0 && z % 2 == 0 && y % 2 != 0)
		{
			cout << "Zbir parnih cifara u broju je: " << z << endl;
		}
		if (k % 2 != 0 && z % 2 != 0 && y % 2 == 0)
		{
			cout << "Zbir parnih cifara u broju je: " << y << endl;
		}

		else if(k % 2!=0 && l % 2 != 0 && z % 2 != 0 && y % 2 != 0 )
		{
			cout << "Nema cifre koji je paran broj." << endl;
		}
	}
	system("pause");
	return 0;
}