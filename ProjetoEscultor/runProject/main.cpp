#include<iostream>
#include"sculptor.hpp"

using namespace std;

int main(){

    Sculptor sculptor(20,20,20);

    sculptor.setColor(0,0,0,1);
    sculptor.putVoxel(0,0,0);
    sculptor.setColor(0,0,1,0);
    sculptor.cutVoxel(0,0,0);
    sculptor.putSphere(10,10,10,4);
    sculptor.setColor(1, 0, 0, 1); //??
    sculptor.cutSphere(6, 6, 6, 1);
    sculptor.setColor(0, 1, 0, 1);
    sculptor.putEllipsoid(5,5,5,4,3,2);

    sculptor.writeOFF("teste.off");

    return 0;

}
