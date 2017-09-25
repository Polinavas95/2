#include <iostream>
int i=0;
void getEnergy(double e32, double e33){
    i++;
    double energy = e33-e32;
    std::cout << "Energy = "<<energy<< std::endl;
}
int getNumber(){
    return i;
}