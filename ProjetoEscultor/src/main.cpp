#include<iostream>
#include"sculptor.hpp"

using namespace std;

int main(){

    /*Sculptor teste(5,5,5);

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

    */

    /*Sculptor flower(25,25,25);

    //base
    flower.setColor(0.39,0.66,0.22,1.0);
    flower.putBox(2,7,1,8,0,1);

    flower.putBox(1,2,1,8,1,2);
    flower.putBox(7,8,1,8,1,2);

    flower.putBox(0,1,1,8,2,7);
    flower.putBox(8,9,1,8,2,7);

    flower.putBox(1,2,1,8,7,8);
    flower.putBox(7,8,1,8,7,8);

    flower.putBox(2,7,1,8,8,9);

    flower.putEllipsoid(4,0,4,4,1,4);

    //firula
    flower.setColor(0.37,0.27,0.13,1.0);
    flower.putEllipsoid(4,7,4,4,1,4);

    //tronco
    flower.setColor(0.39,0.66,0.22,1.0);
    flower.putEllipsoid(4,8,4,2,8,2);

    flower.cutBox(3,4,8,16,3,4);
    flower.cutBox(3,4,8,16,5,6);
    flower.cutBox(5,6,8,16,3,4);
    flower.cutBox(5,6,8,16,5,6);

    //left-leaf
    flower.putBox(2,3,8,9,3,6);
    flower.putBox(1,2,9,10,3,6);
    flower.putBox(0,1,9,10,4,5);
    //right-leaf
    flower.putBox(6,7,10,11,3,6);
    flower.putBox(7,9,11,12,3,6);
    flower.putBox(9,10,11,12,4,5);

    //head
    flower.setColor(1.0,0.22,0.1,1.0);
    flower.putSphere(4,19,4,5);

    //mais firula
    flower.setColor(1.0,1.0,1.0,1.0);
    flower.putBox(2,7,21,22,9,10);
    flower.putBox(2,7,17,18,9,10);

    flower.putVoxel(1,20,8);
    flower.putVoxel(0,19,7);
    flower.putVoxel(7,20,8);
    flower.putVoxel(8,19,7);

    flower.putVoxel(7,18,8);
    flower.putVoxel(1,18,8);

    flower.putVoxel(2,18,9);
    flower.putVoxel(3,20,9);
    flower.putVoxel(4,18,9);
    flower.putVoxel(5,20,9);
    flower.putVoxel(6,18,9);



    flower.writeOFF("flower.off");*/

    Sculptor astronauta(25,25,25);

    //legs
    astronauta.setColor(0.19,0.19,0.19,1.0);
    astronauta.putBox(3,6,0,1,10,16);
    astronauta.putBox(8,11,0,1,10,16);

    astronauta.setColor(1.0,1.0,1.0,1.0);
    astronauta.putBox(3,6,1,5,10,13);
    astronauta.putBox(8,11,1,5,10,13);

    //tronco
    astronauta.putBox(3,11,5,14,7,16);

    //arms
    astronauta.putBox(0,3,7,10,9,16);
    astronauta.putBox(11,14,7,10,9,16);

    astronauta.putBox(0,3,10,12,9,12);
    astronauta.putBox(11,14,10,12,9,12);

    astronauta.setColor(0.19,0.19,0.19,1.0);
    astronauta.putBox(0,3,7,10,16,17);
    astronauta.putBox(11,14,7,10,16,17);

    //head
    astronauta.setColor(1.0,1.0,1.0,1.0);
    astronauta.putBox(1,13,14,15,6,17);
    astronauta.putBox(1,13,14,22,6,8);
    astronauta.putBox(1,13,22,23,6,17);

    astronauta.setColor(0.0,0.55,0.8,1.0);
    astronauta.putBox(1,13,15,22,8,9);

    astronauta.setColor(0.19,0.19,0.19,1.0);
    astronauta.putBox(1,13,15,22,9,17);

    //oxygen
    astronauta.setColor(0.65,0.65,0.65,1.0);
    astronauta.putBox(3,11,5,14,2,7);
    astronauta.cutBox(3,11,5,6,6,7);
    astronauta.cutBox(3,11,13,14,6,7);
    astronauta.putBox(5,6,14,18,3,4);
    astronauta.putBox(7,8,14,24,3,4);

    astronauta.setColor(0.3,0.3,0.3,1.0);
    astronauta.putVoxel(5,18,3);
    astronauta.putVoxel(7,24,3);


    astronauta.writeOFF("astronauta.off");

    return 0;

}
