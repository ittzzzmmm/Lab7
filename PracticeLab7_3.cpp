#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int adiff(int A,int B){
    int A360 = A%360 ;
    int B360 = B%360 ;
    if(A360<0){
        A360 = A360 + 360 ;
    }
    if(B<0){
        B360 = B360 + 360 ;
    }
    
    if(abs(A360-B360)>180){
        return 360 - abs(A360-B360) ;
    }else{
        return abs(A360-B360) ;
    }

}

int main(){

    int x = adiff(10,350);
    cout << x ;
}