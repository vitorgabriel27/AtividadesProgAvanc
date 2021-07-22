#include<iostream>
#include"sculptor.hpp"

using namespace std;

int main(){

    Sculptor sword(20, 20, 20);

    //ponta de baixo
    sword.setColor(0.03,0.14,0.12,1.0);//azul marinho
    sword.putVoxel(0,0,0);
    sword.putBox(0,1,1,3,0,1);
    sword.putBox(1,3,0,1,0,1);
    sword.putVoxel(1,2,0);
    sword.putVoxel(2,1,0);
    sword.setColor(0,0.7,0.7,1.0);
    sword.putVoxel(1,1,0);

    //bainha
    sword.setColor(0.55,0.27,0.07,1.0);
    for(int i = 2; i < 5; i++){
        sword.putVoxel(i,i,0);//diagonal bainha
    }
    sword.setColor(0.44,0.31,0.22,1.0);
    sword.putVoxel(2,3,0);
    sword.putVoxel(3,4,0);
    sword.setColor(0.24,0.17,0.12,1.0);
    sword.putVoxel(3,2,0);
    sword.putVoxel(4,3,0);

    //lamina
    sword.setColor(0,0.75,0.75,1.0);
    for(int i = 6; i < 17; i++){
        sword.putVoxel(i,i,0);//diagonal lamina
    }
    //centro da empunhadura
    sword.setColor(0,0.7,0.7,1.0);
    sword.putBox(6,8,4,5,0,1);
    sword.putBox(4,5,6,8,0,1);
    sword.putVoxel(5,5,0);
    sword.setColor(0,0.55,0.55,1.0);
    sword.putVoxel(8,3,0);
    sword.putVoxel(3,8,0);

    //Borda da empunhadura
    sword.setColor(0.03,0.14,0.12,1.0);
    sword.putVoxel(5,4,0);
    sword.putVoxel(4,5,0);
    sword.putBox(6,8,3,4,0,1);
    sword.putBox(3,4,6,8,0,1);

    sword.putBox(6,8,5,6,0,1);
    sword.putBox(5,6,6,8,0,1);

    sword.putBox(8,10,2,3,0,1);
    sword.putBox(2,3,8,10,0,1);


    sword.putVoxel(9,3,0);
    sword.putVoxel(3,9,0);

    sword.putVoxel(8,4,0);
    sword.putVoxel(4,8,0);

    //borda da lamina
    sword.putBox(16,17,14,17,0,1);
    sword.putBox(14,17,16,17,0,1);
    for(int i = 8; i < 16; i++){
        sword.putVoxel(i-2,i,0);
        sword.putVoxel(i,i-2,0);

    }

    sword.setColor(0,1.0,1.0,1.0);
    for(int i = 7; i < 16; i++){
        sword.putVoxel(i-1,i,0);
        sword.putVoxel(i,i-1,0);

    }


    sword.writeOFF("sword.off");

    return 0;

}
