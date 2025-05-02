#include<iostream>
using namespace std;

template<typename T>

T Findmax(T a,T b){
	return (a>b)?a:b;
}

template<typename T>
	class Calculator{
	private:
		T num1,num2;

	public:
		Calculator(T n1,T n2){
			num1=n1;
			num2=n2;
		}
		T add(){
			return num1+num2;
		}
		T subtract(){
			return num1-num2;
		}
		T multiply(){
			return num1*num2;
		}
		T division(){
			return num1/num2;
		}
};

int main() {
	int a,b;
	float x,y;
	double p,q;
	cout<<"Enter the value of a &b: "<<endl;
	cin>>a>>b;
	cout<<Findmax(a,b)<<endl;
	
	
	cout<<"Enter the value of x& y: "<<endl;
	cin>>x>>y;
	cout<<Findmax(x,y)<<endl;
	
	cout<<"Enter the value of p& q: "<<endl;
	cin>>p>>q;
	
	Calculator<int> intCal(a, b);
    cout << "\nInteger Operations: " << endl;
    
	cout<< intCal.add() << endl;
	cout<< intCal.subtract() << endl;
	cout<< intCal.multiply() << endl;
	cout<<intCal.division() << endl;
	
	Calculator<float> floatCal(x, y);
    cout << "\nFloat Operations: " << endl;
    
	cout<< floatCal.add() << endl;
	cout<< floatCal.subtract() << endl;
	cout<< floatCal.multiply() << endl;
	cout<< floatCal.division() << endl;
	
	 Calculator<double> doubleCal(p, q);
    cout << "\nDouble Operations: " << endl;
    
	cout<< doubleCal.add() << endl;
    cout<< doubleCal.subtract() << endl;
    cout<<doubleCal.multiply() << endl;
    cout<<doubleCal.division() << endl;
	
	return 0;
}
