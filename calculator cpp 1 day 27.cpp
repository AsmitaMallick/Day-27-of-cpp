#include<iostream>
#include<cmath>
using namespace std;
class simple{
	protected:
		int a,b;
	public:
		void set1data(int num1,int num2){
			a = num1;
			b = num2;
		}
		void display(void){
	cout<<"addition is: "<< a+b <<endl;
	cout<<"substraction is: "<< a-b <<endl;
	cout<<"multiplication is: "<< a*b <<endl;
	cout<<"division is: "<< a/b <<endl;
	
}
};
class scientific{
	protected:
		int x,y;
		public:
			void set2data(int no1, int no2){
				x = no1;
				y = no2;
			}
			void process(void){
				cout<<"the square root of x: "<<sqrt(x)<<endl;
				cout<<"the square root of y: "<<sqrt(y)<<endl;
				cout<<"the cube root of x: "<<cbrt(x)<<endl;
				cout<<"the cube root of y: "<<cbrt(y)<<endl;
			}
};
class derived : public simple, public scientific{
	public:
		void set(int a, int b){
		
		simple::set1data(a, b);
		simple::display();
		scientific::set2data(a,b);
		scientific::process();
	}
};
int main(){
	int p,q;
	cout<<"enter the numbers: "<<endl;
	cin>>p>>q;
	derived der;
	der.set(p,q);
	der.display();
	der.process();
	return 0;
}





















