#include "FiguraGeometrica.hpp"
#include <iostream>

PutVoxel::PutVoxel(int _x0, int _y0, int _z0, float _r, float _g, float _b, float _a){

    this->x0 = _x0;
    this->y0 = _y0;
    this->z0 = _z0;
    this->r = _r;
    this->g = _g;
    this->b = _b;
    this->a = _a;
}

void PutVoxel::draw(Sculptor &t){

    t.setColor(this->r, this->g, this->b, this->a);
    t.putVoxel(this->x0, this->y0, this->z0);
}

CutVoxel::CutVoxel(int _x0, int _y0, int _z0){

    this->x0 = _x0;
    this->y0 = _y0;
    this->z0 = _z0;
}

void CutVoxel::draw(Sculptor &t){

    t.cutVoxel(this->x0, this->y0, this->z0);
}

PutBox::PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a){

    this->x0 = _x0;
    this->x1 = _x1;
    this->y0 = _y0;
    this->y1 = _y1;
    this->z0 = _z0;
    this->z1 = _z1;
    this->r = _r;
    this->g = _g;
    this->b = _b;
    this->a = _a;
}

void PutBox::draw(Sculptor &t){

    t.setColor(this->r, this->g, this->b, this->a);
    t.putBox(this->x0, this->x1, this->y0, this->y1, this->z0, this->z1);
}

CutBox::CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1){

    this->x0 = _x0;
    this->x1 = _x1;
    this->y0 = _y0;
    this->y1 = _y1;
    this->z0 = _z0;
    this->z1 = _z1;
}

void CutBox::draw(Sculptor &t){

    t.cutBox(this->x0, this->x1, this->y0, this->y1, this->z0, this->z1);
}

PutSphere::PutSphere(int _x0, int _y0, int _z0, int _radius, float _r, float _g, float _b, float _a){

    this->x0 = _x0;
    this->y0 = _y0;
    this->z0 = _z0;
    this->radius = _radius;
    this->r = _r;
    this->g = _g;
    this->b = _b;
    this->a = _a;
}

void PutSphere::draw(Sculptor &t){

    t.setColor(this->r, this->g, this->b, this->a);
    t.putSphere(this->x0, this->y0, this->z0, this->radius);
}

CutSphere::CutSphere(int _x0, int _y0, int _z0, int _radius){

    this->x0 = _x0;
    this->y0 = _y0;
    this->z0 = _z0;
    this->radius = _radius;
}

void CutSphere::draw(Sculptor &t){

    t.cutSphere(this->x0, this->y0, this->z0, this->radius);
}

PutEllipsoid::PutEllipsoid(int _x0, int _y0, int _z0, int _rx, int _ry, int _rz, float _r, float _g, float _b, float _a){

    this->x0 = _x0;
    this->y0 = _y0;
    this->z0 = _z0;
    this->rx = _rx;
    this->ry = _ry;
    this->rz = _rz;
    this->r = _r;
    this->g = _g;
    this->b = _b;
    this->a = _a;
}

void PutEllipsoid::draw(Sculptor &t){
    
    t.setColor(this->r, this->g, this->b, this->a);
    t.putEllipsoid(this->x0, this->y0, this->z0, this->rx, this->ry, this->rz);
}

CutEllipsoid::CutEllipsoid(int _x0, int _y0, int _z0, int _rx, int _ry, int _rz){

    this->x0 = _x0;
    this->y0 = _y0;
    this->z0 = _z0;
    this->rx = _rx;
    this->ry = _ry;
    this->rz = _rz;
}

void CutEllipsoid::draw(Sculptor &t){

    t.cutEllipsoid(this->x0, this->y0, this->z0, this->rx, this->ry, this->rz);
}