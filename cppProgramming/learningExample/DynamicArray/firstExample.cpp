#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> dynArr(3);

	dynArr[0]=121;
	dynArr[1]=-123;
	dynArr[2]=133;


	cout <<"No of Integers in Array= "<<dynArr.size()<<endl;
	cout <<"address of arra[0]="<<&dynArr[0]<<endl;
	cout <<"address of arra[1]="<<&dynArr[1]<<endl;
	cout <<"address of arra[2]="<<&dynArr[2]<<endl;
	cout << "Size of Integers Array dynArr using sizeof= "<<sizeof(dynArr)<<endl;
	cout <<"address of arra[3]="<<&dynArr[3]<<endl;
	cout << "Element Of Array= "<< endl <<dynArr[0]<< "\t " <<dynArr[1] << "\t "<< dynArr [2]<< "\t"<<dynArr[3] <<endl;
	cout <<"Size of array after Push back"<<endl;

	dynArr.push_back(21);


	cout <<"address of arra[3]="<<&dynArr[3]<<endl;
	cout << "Size of Integers Array dynArr= "<<dynArr.size()<<endl;
	cout << "Size of Integers Array dynArr using sizeof= "<<sizeof(dynArr)<<endl;
	cout <<"Last Element of array="<<dynArr[dynArr.size()-1]<<endl;

return 0;
}
