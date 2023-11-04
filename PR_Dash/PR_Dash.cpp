#include <iostream>
using namespace std;

class Banknot
{
private:

public:
	unsigned short int first = 0;
	unsigned short int numinals[10] = { 1,2,5,10,20,50,100,500,1000,5000 };
	unsigned int second = 0;
	unsigned int sum = 0;
	//Ïåðåâ³ðêà ùî âïèñàíèé íîì³íàë ïðàâèëüíèé
	bool isValid(int banknot)
	{
		for (int i = 0; i < sizeof(numinals) / sizeof(numinals[0]); i++) {
			if (banknot == numinals[i])
			{
				return true;
			}
		}
		return false;
	}
	//Ââ³ä íîì³íàëó
	void SetNominal()
	{
		unsigned int banknot = 0;

		cout << "\nWrite nominal: \n";
		cin >> banknot;
		if (isValid(banknot))
		{
			first = banknot;
		}
		else
		{
			cout << "Wrong numinal!";
			SetNominal();
		}
	}
	//Ââ³ä ê³ëüêîñò³ êóïþð
	void SetQuantity()
	{
		int count = 0;
		cout << "Write quantity of this nominal: \n";
		cin >> count;
		if (count > 0) 
		{
			second = (unsigned int)count;
		}
		else 
		{
			cout << "Quantity cant be negative! \n";
			SetQuantity();

		}
		
	}
	//Ñóìà
	int summa() {
		return first * second;
	}
};

int main()
{
	Banknot banknota;
	banknota.SetNominal();
	banknota.SetQuantity();
	banknota.summa();
	
	cout <<"Summa: "<< banknota.summa() ;
	getch();
	return 0;
}

