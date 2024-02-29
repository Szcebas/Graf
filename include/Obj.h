#ifndef OBJ_H
#define OBJ_H

#pragma once
#include "Model.h"
using namespace std;
class obj
{
public:
    obj(string fname):Model(fname){};

private:
void load(string fname);

};

#endif