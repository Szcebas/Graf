#ifndef MODEL_H
#define MODEL_H

#pragma once
#include <iostream>
#include <vector>
#include<fstream>
#include "vertex.h"
#include "Face.h"




class Model
{
public:
    Model(string fname);
    void info();

protected:
virtual void load(string fname);
string name;
vector<vertex> vertices;
vector<Face> faces;
vector<string> split const string& str,const string& delim);

};

#endif