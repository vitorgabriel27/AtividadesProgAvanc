#include<iostream>
#include"sculptor.hpp"

using namespace std;

int main(){

    Sculptor teste(5,5,5);

        teste.setColor(0,0,1,1);
        teste.putBox(1,4,2,4,3,4);

    teste.writeOFF("teste.off");

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

    sculptor.writeOFF("sculptor.off");

    return 0;

}
