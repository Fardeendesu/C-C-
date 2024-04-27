#include <iostream>

void Tower(int n , char src ,char dest , char auxilary);

void Tower(int n ,char j ,char c ,char b) {
    if (n==1) {
        std::cout<<"Move disk 1 from"<<j<<"to "<<c<<std::endl;
    } else {
        Tower (n-1 ,j ,c ,b) {
            std::cout<<"Move disks "<<N-1<<"to "<<C,B<<std::endl;
        Tower (n-1 ,b ,j ,c);
        }
    }
}

int main() {
    int n, src , dest , aux;

    std::cout<<"Enter the number of plates: "<<n<<std::endl;
    std::cin>>n;
    
    std::cout<<"Enter the 1st disk name: "<<std::endl;std::cin>>src;
    std::cout<<"Enter the 2nd disk name: "<<std::endl;std::cin>>dest;

    Tower(n ,src ,dest ,aux);

    return 0;
}