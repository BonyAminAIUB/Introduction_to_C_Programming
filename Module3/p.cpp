#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if(A<B && A<C){
        cout << A << " ";
        if(B>C){
            cout << B ;
        }
        else{
            cout << C;
        }
    }
    else if(B<A && B<C){
        cout << B << " ";
        if(A>C){
            cout << A;
        }
        else{
            cout << C;
        }
    }
    else{
        cout << C << " ";
        if(A>B){
            cout << A;
        }
        else{
            cout << B;
        }
    }
    return 0;
}