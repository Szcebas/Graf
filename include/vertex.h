#ifndef VERTEX_H
#define VERTEX_H

#pragma once
#include<iostream>
using namespace std;
class vertex
{
private:
    float x,y,z;
public:
  vertex(){};
  vertex(float x, float y, float z); 
  void print();
};

#endif