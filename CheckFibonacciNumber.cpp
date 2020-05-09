#include <iostream>
using namespace std;
int main(){

cout<<"Please state a number for fibonacci number: ";
int n;
cin>>n;

int result = 0;
int number1 = 0;
int number2 = 1;

if (n==1 ){
	 cout<<n<<" is fibonacci number\n";
}

for (int i=1; i<n; i++){
		result=number1+number2;
        number1=number2;
        number2=result;
        
        if (n == result){
        	cout <<n<< " is fibonacci number\n ";
            break;
		}
		if (i == n-1){
			
			if (n != result){
				
				cout<<n <<" is not fibonacci number";
			}
		}
}
	return 0;
}
