  
#include <cstdlib>
#include <iostream>
#include "sculptor.hpp"
#include <vector>
#include <fstream>
#include <cmath>

// Definição do construtor da classe Sculptor
Sculptor::Sculptor(int _nx, int _ny, int _nz){

    this->nx = _nx;
    this->ny = _ny;
    this->nz = _nz;
    this->r = 0.0;
    this->g = 0.0;
    this->b = 0.0;
    this->a = 0.0;

    vxl = new Voxel **[_nx];

    for(int i = 0; i < _nx; i++ ){

        vxl[i] = new Voxel *[_ny];
        for(int j = 0; j < _ny; j++){

            vxl[i][j] = new Voxel [_nz];
            for(int k = 0; j < _nz; j++ ){

                    this->vxl[i][j][k].r = 0.0;
                    this->vxl[i][j][k].g = 0.0;
                    this->vxl[i][j][k].b = 0.0;
                    this->vxl[i][j][k].a = 0.0;
                    this->vxl[i][j][k].isOn = true;
                 
            }
        }
    }

}

//definição do destrutor da minha classe Sculptor
Sculptor::~Sculptor(){

    for(int i = 0; i < nx; i++ ){

        for(int j = 0; j < ny; j++){

           delete[] vxl[i][j];
        }
        delete[] vxl[i];
    }
    delete[] vxl;

}

//agora vxlamos definir a funçao setColor da classe Sculptor
void Sculptor::setColor(float r, float g, float b, float alpha){

    this->r = r;
    this->g = g;
    this->b = b;
    this->a = alpha;

}

//definição da função putvxloxel 
void Sculptor::putVoxel(int x, int y, int z){

    this->vxl[x][y][z].isOn = true;
    this->vxl[x][y][z].r = this->r;
    this->vxl[x][y][z].g = this->g;
    this->vxl[x][y][z].b = this->b;
    this->vxl[x][y][z].a = this->a;

}

//definição de cutvxloxel
void Sculptor::cutVoxel(int x, int y, int z){
    this->vxl[x][y][z].isOn = false;
}

//definição da função putBox
void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){

    //vxlerifica se a minha Box Está dentro da dimensão
    x0 = (x0 < 0) ? 0 : x0;
    x1 = (x1 > this->nx) ? this->nx : x1;
    y0 = (y0 < 0) ? 0 : y0;
    y1 = (y1 > this->ny) ? this->ny : y1;
    z0 = (z0 < 0) ? 0 : z0;
    z1 = (z1 > this->nz) ? this->nz : z1;

    //atribui o vxloxel dentro dos intervxlalos [x0,x1],[y0,y1] e [z0,z1]
    for(int i = x0; i < x1; i++){
        for(int j = y0; j < y1; j++){
            for(int k = z0; k< z1; k++){

                this->putVoxel(i,j,k);
            }
        }
    }
}

//definiçao cutBox
void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){


    //Retira a Box da minha matrix
    for(int i = x0; i < x1; i++){
        for(int j = y0; j < y1; j++){
            for(int k = z0; k< z1; k++){

                this->cutVoxel(i,j,k);
            }
        }
    }
}

