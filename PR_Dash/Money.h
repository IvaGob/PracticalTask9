#pragma once
class Money
{
	private:
		
	public:
		unsigned short int first;
		unsigned short int numinals[10] = { 1,2,5,10,20,50,100,500,1000,5000 };
		unsigned int second;
		int summa() 
		{

		}
		bool isValid(int banknot) 
		{
			for (int i = 0; i < sizeof(numinals)/sizeof(numinals[0]); i++) {
				if (banknot == numinals[i]) return true;
			}
			return false;
		}
		int SetNominal() {
			if(isValid())
		}
};

