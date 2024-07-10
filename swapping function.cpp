#include<iostream>
using namespace std;
void printHi();

int sum(int a, int b){
	int c;
	c= a+b;
	a=500;
	return c;
}

void swap(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"The value of a and b after swapping inside function are: "<<a<<" "<<b<<endl;
	
}

int main(){
	printHi();
	int a,b;
	int c;
	a=4;
	b=5;
	swap(a,b);
	cout<<"The value of a and b after swapping outside the finction are: "<<a<<" "<<b<<endl;
}
