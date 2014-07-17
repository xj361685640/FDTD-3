#ifndef FDTD_FDTDFIELD
#define FDTD_FDTDFIELD

#include "Grid.hpp"
#include "Source.hpp"
#include "Inputs.hpp"
#include "Obj.hpp"
// #include <assert.h>
// #include <iomanip>
// #include <iostream>
#include <memory>
// #include <random>
// #include <stdexcept>
// #include <string>
#include <vector>
#include <map>

// #include <complex>
// typedef std::complex<double> cplx;

class FDTDField
{
protected:
    size_t nx,ny;
    double dx,dy,dt,res;
public:
    std::shared_ptr<Grid2D<double>> Ex,Ey,Ez,Hx,Hy,Hz;
    std::shared_ptr<Grid2D<int>> physGrid,phys_Ex,phys_Ey,phys_Ez,phys_Hx,phys_Hy,phys_Hz;
    std::vector<Source<double>> srcArr;
    std::map<int,Obj> objArr;

    FDTDField(programInputs *IP = NULL);
    void initializeGrid(programInputs *IP = NULL);
    void ouputField();
    void step();
    Obj makeSphere(vector<double> mater, double rad, vector<double> loc);
    Obj makeBlock(vector<double> mater, vector<double> dims, vector<double> loc);
};

#endif
