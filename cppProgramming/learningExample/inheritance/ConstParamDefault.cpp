#include<iostream>
using namespace std;


class Human
{
private:
string name;
int age;
public:
// overloaded constructor (no default constructor)
Human(string humansName, int humansAge = 25)
{
name = humansName;
age = humansAge;
cout << "Overloaded constructor creates " << name;
cout << " of age " << age << endl;
}
};

int main()
{
	
	Human obj("Alpha", 20);
return 0;
}
