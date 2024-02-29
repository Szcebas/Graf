#ifndef PLY_H
#define PLY_H

#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "vertex.h"
#include "Face.h"

using namespace std;

class Ply
{
public:
    Ply(string fname);
    void info() const;

private:
    vector<vertex> vertices;
    vector<Face> faces;
    vector<string> split(const string& str, const string& delim);
    string plyFileName;
};

#endif
