// A number is Fibonacci if and if only one or both of (5n^2+4) or (5n^2-4) is a perfect square
#include <iostream>
#include <math.h>
using namespace std;

//checking n is a perfect square
bool isPerfectSquare(int x){
	
	int s = sqrt(x);
	return (s*s == x);
}

//checking n is a fibonacci number
bool isFibonacci(int n){
	
	return isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4); 
}

int main(){
	int k;
	cout<<"Please state a number for fibonacci number: ";
	cin>>k;
	for(int i=1; i<=k; i++){
		
		isFibonacci(i)?	cout<<i<<" is a Fibonacci Number \n":	cout<<i<<" is a not Fibonacci Number \n";
	}
	
	return 0;
}
