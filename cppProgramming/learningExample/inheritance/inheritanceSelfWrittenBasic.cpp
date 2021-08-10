#include<iostream>
using namespace std;
class baseClass{
	private:
		int alpha, beta;
	public:
		baseClass(){alpha=beta=0;  }
		baseClass(int a, int b){
			alpha=a;
			beta=b;
		}
		void setData(int a, int b){
			alpha=a;
			beta=b;
		}	
		void getData(){
			cout << "Value of Alpha inside Base="<< alpha<<endl;
			cout << "Value of Beta inside Base="<< beta <<endl;
		}
};
class derivedClass:public baseClass{
	private:
	//	int alpha;	
		public:
		derivedClass() {	}
		derivedClass (const baseClass *obj)
		//derivedClass (int a, int b)
		{
			cout << "Parametrise Const of Derived Class"<<endl;
		}
};
int main(){

	derivedClass obj1(121,12);
	baseClass obj(13,12);
	obj1=obj;

	return 0;
}
