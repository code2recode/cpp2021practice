// C++ program demonstrating ambiguity in Multipath
// Inheritance

#include <iostream>
using namespace std;

class ClassA {
public:
	int a;
	ClassA()
	{
		cout <<"Class A constructor Called"<<endl;
	}
};

class ClassB : public ClassA {
public:
	int b;
		ClassB()
		{
		cout <<"Class A constructor Called from Class-B"<<endl;
		}
};
class ClassC : public ClassA {
public:
	int c;
		ClassC()
		{
		cout <<"Class A constructor Called from Class-C"<<endl;
		}
};

class ClassD : public ClassB, public ClassC {
public:
	int d;
		ClassD()
		{
		cout <<"Class A constructor Called from Class-D"<<endl;
		}
};

int main()
{

	ClassD obj;

	// obj.a = 10;				 //Statement 1, Error
	// obj.a = 100;				 //Statement 2, Error

	obj.ClassB::a = 10; // Statement 3
	obj.ClassC::a = 100; // Statement 4

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << "\n A from ClassB : " << obj.ClassB::a;
	cout << "\n A from ClassC : " << obj.ClassC::a;

	cout << "\n B : " << obj.b;
	cout << "\n C : " << obj.c;
	cout << "\n D : " << obj.d;
}

