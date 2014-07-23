#ifndef FDTD_INPUTS
#define FDTD_INPUTS

#include "enum.hpp"
#include "Detector.hpp"
#include "Source.hpp"
#include "Obj.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class programInputs
{
public:
	std::string filename_;
	//Computational cell parameters and run parameters
    int procs_;
    double x_size_;
    double y_size_;
    double z_size_;
    double res_;
    double courant_;
    double t_pml_;
    std::string output_base_;
    string pol_;
    //vector<Source<double>> srcArr();
    vector<Obj> objArr_;
	//Source Parameters Start with just Gaussian complicate later
    vector<Source<double>> srcArr_;
    vector<Detector<double>> dctArr_;
	//Geometry Will add parameters as I write
	int n_struct_;

	//Imports the parameters from json file, converts to atomic units
	programInputs(std::string infile);
    vector<double> getDielectricParams(string mat);
    // Conversion to enums
    Polarization string2pol(string p);
    Shape string2shape(string s);
    dtcOutType string2out(string t);
    plsShape string2prof(string p);

    // convert double to int grid point
    int find_pt(double pt) {return int(pt*res_);};

	//Removes comment lines from the json file
	void stripComments();

	//Convert parameters to FDTD units
	void toFDTD();
};
#endif

