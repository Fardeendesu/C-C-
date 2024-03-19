#include <iostream>

unsigned long long FactorialIterative(int n){
    unsigned long long result =1;
    for (int i=1;i<=n;++i){
        result *=i;
    }
    return result;
}

int main(){

    int n;
    std::cout<<"Enter a number to find its fact:";
    std::cin >> n;

    unsigned long long result = FactorialIterative(n);

    std::cout <<"Factorial of "<<n<<"(Iterative way):"<< result <<std::endl;

    return 0;
}