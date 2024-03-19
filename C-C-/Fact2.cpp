#include <iostream>
    using namespace std;
unsigned long long factoriaRecurse(int n){
    if(n==0|| n==1){
        return 1;
    } else{
        return n*factoriaRecurse(n-1);
    }
}
    int main(){
        int n;
        cout<<"Enter a number:";
        cin>>n;

        unsigned long long result = factoriaRecurse(n);
                if(n>=66){
        cout<<"inf";
    }
    else{
        cout<<"Factorial of "<<n<<"(Recurse way):"<<result <<endl;
        return 0;
    }
    }