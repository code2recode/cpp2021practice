#include<iostream>
using namespace std;

#include<string.h>
class MyString
{
	private:
		char * buffer;
		char * buffer2;
	public:
		MyString(const char *str)
		{
			buffer = new char [strlen(str)+1];							
			strcpy(buffer, str);
			cout << "Address of buffer ptr insideMain= "<< &buffer << " it contains= "<< buffer <<endl;	
			cout << "Address of buffer2 "<< &buffer <<endl;	
		}
		~MyString()
		{
			cout << "Invoking Destructor "<<endl;
			delete [] buffer;
		}

int getLength()
{
	return strlen(buffer); 
}
const char* getString()
{
	cout <<"Buffer Contains: "<<buffer <<endl;
	return buffer; }
};


	void useMyString(MyString obj)

	{
		
		cout << "String Copied Length=  "<<obj.getLength()<<endl;
		cout << "Buffer Contains:************ ="<<obj.getString()<< "*****************"<<endl;
		cout <<"Address of newly created Object= "<< &obj <<endl;
		cout <<"Logically Last Line"<<endl;
		return;
	}
		
		
int main()
{	
	MyString obj("Hello MR Rizwan");
	cout <<"Addres Of Object= "<<&obj <<endl;
	useMyString(obj);

return 0;
}
