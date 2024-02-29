#ifndef FACE_H
#define FACE_H

#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Face
{
private:
    vector<int> indices;
public:
    Face(vector<int> indices);
    void print();
};

#endif