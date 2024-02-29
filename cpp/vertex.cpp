#include "../include/vertex.h"

vertex:: vertex(float x, float y, float z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}
void vertex::print(){
    cout<<"(" <<this->x << " , "<<this->y <<" , "<<this->z<<")"<<endl;
}