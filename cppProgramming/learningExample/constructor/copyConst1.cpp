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
		{	buffer = new char [strlen(str)+1];							
			strcpy(buffer, str);	}
		~MyString()
		{ delete [] buffer;			}

int getLength()
{	return strlen(buffer); 		}
const char* getString()
{	return buffer; 				}
};
	void useMyString(MyString obj)
	{	cout << "String Copied Length=  "<<obj.getLength()<<endl;
		cout << "Buffer Contains:************ ="<<obj.getString()<< "*****************"<<endl;
		return;					}

int main()
{	
	MyString obj("Hello MR Rizwan");
	useMyString(obj);
return 0;
}
