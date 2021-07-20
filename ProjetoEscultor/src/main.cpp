#include<iostream>
#include "sculptor.hpp"

using namespace std;

int main(){
    
    /*Sculptor sculptor(5,5,5);

    sculptor.setColor(0,0,1,1);
    sculptor.putBox(1,4,2,4,3,4);

    sculptor.writeOFF("teste.off");*/

    Sculptor teste(10,10,10);
    teste.setColor(1,0,0,1);
    teste.putVoxel(1,1,1);
    
    teste.writeOFF((char*)"teste.off");
    return 0;

}