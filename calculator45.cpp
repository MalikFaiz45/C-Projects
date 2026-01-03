#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
//calculator	
int num1,num2;
char operater;

cout<<"Number 1 :";
cin>>num1;
cout<<" Enter operator:";
cin>>operater;
cout<<"Number 2 :";
cin>>num2;
if(operater== '+'){
	int add=num1+num2;
	cout<<"addition :"<<add<<endl;
}
else if(operater== '-'){
	int subtract=num1-num2;
	cout<<"Subtracting :"<<subtract<<endl;
}
else if(operater=='*'){
	float multi=num1*num2;
	cout<<"Multiplication :"<<multi<<endl;
}
else if(operater=='/'){
	double divide=(double)num1/num2;
	cout<<"Dividion :"<<divide<<endl;
}
else if(operater=='%'){
	float modu=num1%num2;
	cout<<"moudulas :"<<modu<<endl;
}
else{
	cout<<"select correct operator"<<endl;
}




	
	
	
	
	return 0;
}

