#include<iostream>
#include<string>
using namespace std;

class nullTerminated
{
	string alpha="Rizwan";
	public:
	nullTerminated()
	{
		char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
		cout << sayHello << std::endl;
		cout << "String :"<<alpha<<endl;
		cout << "Size OF String :"<<sizeof(alpha)<<endl;
		alpha[5]='\0';
		cout << "Now Size OF String :"<<sizeof(alpha)<<endl;
	}
};

int main()
{
	nullTerminated obj;
	
return 0;
}	
