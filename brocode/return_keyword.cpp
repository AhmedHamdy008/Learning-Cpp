#include <iostream>

double calcdmg(double basedmg, double critmultiplier);

int main(){

double bossHp = 100.0;
double basedmg = 15.4;
double critmult = 1.35;
double totdmg = calcdmg(basedmg, critmult);
bossHp-=totdmg;

std::cout<<"You dealt "<<totdmg<<" damage!\n";
std::cout<<"Boss HP left: "<<bossHp<<'\n';

    return 0;
}

double calcdmg(double basedmg, double critmultiplier){

return basedmg*critmultiplier;

}