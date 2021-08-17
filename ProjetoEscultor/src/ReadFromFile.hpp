#ifndef READFROMFILE_HPP
#define READFROMFILE_HPP
#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class ReadFromFile{

    public:
        ReadFromFile(const char *filename, char *outputfile);
        ~ReadFromFile();
};

enum class metod{
    put,
    cut,
};
 enum class figure{
    voxel,
    box,
    sphere,
    ellipsoid,
 };
metod whichMet(std::string  _s){
     if(_s == "put"){
        return metod::put;
    }
    else{
        return metod::cut;
    }
}

figure whichFig(std::string  _s){

    if(_s == "voxel"){
        return figure::voxel;
    }
    else{
        if(_s == "box"){
            return figure::box;
        }
        else{
             if(_s == "sphere"){
                return figure::sphere;
            }
            else{
                if(_s == "ellipsoid"){
                    return figure::ellipsoid;
                }
                else{

                exit(1);

                }
            }
        }
    }

};

ReadFromFile::ReadFromFile(const char *infile, char *outfile){


    int largura, altura, profundidade, x0, y0, z0, x1, y1, z1, radius, rx, ry, rz;
    float r, g, b, a;

    std::fstream fs(infile);
    std::string s;
    std::stringstream ss;
    if (!fs.is_open())
    {
        std::cout << "file not open" << std::endl;
        exit(1);
    }
    std::getline(fs, s);
    ss.clear();
    ss.str(s);
    ss >> s;
    if (s != "dim")
    {
        std::cout << "arquivo nao comecou com dim" << std::endl;
        exit(1);
    }

    ss >> largura >> altura >> profundidade;
    Sculptor escultura(largura, altura, profundidade);

    std::vector<FiguraGeometrica *> fig;

    while (std::getline(fs, s)){
        ss.clear();
        ss.str(s);
        ss >> s;

    switch (whichMet(s)){
        case metod::put:
                switch (whichFig(s)){
                    case figure::voxel:
                        ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                        fig.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
                        break;
                    case figure::box:
                        ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                        fig.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                        break;
                    case figure::sphere:
                        ss >> x0 >> y0 >> z0 >> radius >> r >> g >> b >> a;
                        fig.push_back(new PutSphere(x0, y0, z0, radius, r, g, b, a));
                        break;
                    case figure::ellipsoid:
                        ss >> x0 >> y0 >> z0 >> rx >> ry >> rz >> r >> g >> b >> a;
                        fig.push_back(new PutEllipsoid(x0, y0, z0, rx, ry, rz, r, g, b, a));
                        break;
                }
            break;
        case metod::cut:
                switch (whichFig(s)){
                    case figure::voxel:
                        ss >> x0 >> y0 >> z0;
                        fig.push_back(new CutVoxel(x0, y0, z0));
                        break;
                    case figure::box:
                        ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                        fig.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
                        break;
                    case figure::sphere:
                        ss >> x0 >> y0 >> z0 >> radius;
                        fig.push_back(new CutSphere(x0, y0, z0, radius));
                        break;
                    case figure::ellipsoid:
                        ss >> x0 >> y0 >> z0 >> rx >> ry >> rz;
                        fig.push_back(new CutEllipsoid(x0, y0, z0, rx, ry, rz));
                        break;
                }
        default:
             std::cout << "erro na classe ou item nao especificado" << std::endl;
                exit(1);
                break;
    }

    ///draw the figures in the sculptor object
    for (auto i : fig)
    {
        i->draw(escultura);
    }
    ///write in the off format
    escultura.writeOFF(outfile);
    ///deallocate memory
    for (auto i : fig){

        delete i;
    }

}
}
ReadFromFile::~ReadFromFile(){

}

#endif
