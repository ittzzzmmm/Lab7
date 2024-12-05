#include<iostream>
#include<string>

using namespace std;

string reverse(string x){
	int i = 1, L = x.size(); // reverse
	string y = "";
	while(i <= L){
		y += x[L-i];
		i++;
	}
	return y;
}

string upper(string x){
	int i = 0, L = x.size(); // คำสั่งทำให้เป็น upper case ทั้งหมด
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string lower(string x){
	int i = 0, L = x.size(); // คำสั่งทำให้เป็น lower case ทั้งหมด
	string y = "";
	while(i < L){
		y += tolower(x[i]);
        i++;
       
	}
	return y;	
}

int main(){
    cout << "Input text: " ;
    string Word ;
    cin >> Word ;
    string Re_Word = reverse(Word);
    string BigWord = upper(Word) ;
    string Re_BigWord = reverse(BigWord) ;
    cout << "Reversed text: " << Re_Word << endl;

    int N = BigWord.size() ;
    string result;
    for(int i = 0; i < N; i++){
        if(BigWord[i] == Re_BigWord[i]){
            result = "Yes" ;
        }else{
            result = "No" ;
            i = N ;
        }

    }

    cout << "Palindrome: " << result ;

    
    return 0;
}
