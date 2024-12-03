#include<iostream>
#include<string>
using namespace std;

char before(char x){
    char result ;
    int E ;
    if( x > 'A' && x <= 'Z'){
        result = x - 1 ;
        return result ;
    }else if( x == 'A'){
        result = 'Z';
        return result ;
    }else{
        E = '0' ;
        return E ;
    }
    
}
int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
