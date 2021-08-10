#include<iostream>

using namespace std;


class fish
{
	public:
		bool isFreshWareFish;
//	private:
		void swim()
		{
			if(isFreshWareFish)
				cout << "Fresh Water Fish"<<endl;
			else
				cout << "Sea Water Fish"<<endl;
		}
};

class tuna:public fish
{
	public:
		tuna()
		{
			isFreshWareFish=false;
		}
};

class crap:public fish
{
	public:
		crap()
		{
			isFreshWareFish=true;
		}
};

int main()
{
	crap myLunch;
	
	tuna myDinner;

	cout <<"About My Food:"<<endl;

	cout << "- Lunch - ";
	myDinner.swim();

return 0;
}
